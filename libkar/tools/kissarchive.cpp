#include <kar.hpp>
#include <iostream>
#include <fstream>
#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>

#include <QFile>
#include <QMap>
#include <QString>
#include <QStringList>

using namespace std;

#define MAX_PACKAGE_NAME 128
#define MAX_PACKAGE_VERSION 128

struct PackageHeader
{
	char name[MAX_PACKAGE_NAME];
	char version[MAX_PACKAGE_VERSION];
};

bool writeFile(const QString& file, const QString& dest, const Kiss::KarPtr& archive)
{
	QFile in(file);
	if(!in.open(QIODevice::ReadOnly)) {
		cout << "Could not open file " << file.toStdString() << " for reading." << endl;
		return false;
	}
	bool ret = archive->addFile(dest, in.readAll());
	if(!ret) cout << "Could not add " << dest.toStdString() << " to package. File might already exist or the directory could not be found." << endl;
	in.close();
	return ret;
}

bool create(const QString& name, const QString& version, const QStringList& dirs, const QMap<QString, QString>& files)
{
	if(name.size() >= MAX_PACKAGE_NAME) {
		cout << "Name is too large. Max size is " << MAX_PACKAGE_NAME << " characters" << endl;
		return false;
	}
	if(version.size() >= MAX_PACKAGE_VERSION) {
		cout << "Version is too large. Max size is " << MAX_PACKAGE_VERSION << " characters" << endl;
		return false;
	}
	
	Kiss::KarPtr archive = Kiss::Kar::create();
	PackageHeader header;
	memcpy(header.name, name.toStdString().c_str(), name.size());
	memcpy(header.version, version.toStdString().c_str(), version.size());
	
	archive->setFile("package_info", QByteArray(reinterpret_cast<char *>(&header), sizeof(PackageHeader)));
	
	QMap<QString, QString>::const_iterator fit = files.begin();
	for(; fit != files.end(); ++fit) {
		// cout << "Writing " << fit->first << " as " << fit->second << endl;
		if(!writeFile(fit.key(), fit.value(), archive)) {
			cout << "Error writing file \"" << fit.key().toStdString()
				<< "\" as \"" << fit.value().toStdString() << "\"" << endl;
			return false;
		}
	}
	
	return archive->save(name + "-" + version + ".kiss");
}

bool extract(const QString& name, const QString& to)
{
	Kiss::KarPtr archive = Kiss::Kar::load(name + ".kiss");
	if(!archive) {
		cout << "Failed to open \"" << name.toStdString() + ".kiss\"" << endl;
		return false;
	}
	
	bool ret = archive->extract(to);
	if(!ret) cout << "Could not extract " << name.toStdString() << "." << endl;
	return ret;
}

bool loadMap(const QString& file, QStringList& dirs, QMap<QString, QString>& ret)
{
	ifstream in;
	in.open(file.toStdString().c_str(), ios::in | ios::binary);
	if(!in.is_open()) {
		cout << "Could not open map file " << file.toStdString() << " for reading." << endl;
		return false;
	}
	
	while(!in.eof()) {
		string line;
		std::getline(in, line);
		QString qLine = QString::fromStdString(line);
		
		if(qLine.isEmpty() || qLine.startsWith("#")) continue;
		
		QStringList parts = qLine.split("=>");
		
		if(parts.size() == 1) {
			dirs.push_back(parts[0]);
			continue;
		}
		
		if(parts.size() > 2 || parts[0].isEmpty() || parts[1].isEmpty()) continue;
		
		ret[parts[0].trimmed()] = parts[1].trimmed();
	}

	in.close();
	
	return true;
}

void usage(const char *name)
{
	cout << "Usage: " << name << " [action] [parameters]" << endl;
	cout << "\t" << "--create | -c [name] [version] [kam (optional)] : Creates a package" << endl;
	cout << "\t" << "--extract | -e [file] [prefix (optional)] : Extract a given package to the given prefix" << endl;
}

int main(int argc, char *argv[])
{
	--argc;
	
	if(argc < 2) {
		usage(argv[0]);
		return 1;
	}
	
	if(!strcmp(argv[1], "--create") || !strcmp(argv[1], "-c")) {
		if(argc != 3 && argc != 4) {
			usage(argv[0]);
			return 1;
		}
		
		QString name = argv[2];
		QStringList dirs;
		QMap<QString, QString> files;
#ifdef Q_OS_MAC
		if(!loadMap(argc != 4 ? name + "_osx.kam" : argv[4], dirs, files)) {
			return false;
		}
#elif defined(Q_OS_WIN)
		if(!loadMap(argc != 4 ? name + "_win.kam" : argv[4], dirs, files)) {
			return false;
		}
#endif
		
		if(!create(name, argv[3], dirs, files)) {
			cout << "Failure." << endl;
			return 1;
		}
		
	} else if(!strcmp(argv[1], "--extract") || !strcmp(argv[1], "-e")) {
			if(argc != 2 && argc != 3) {
				usage(argv[0]);
				return 1;
			}

			QString name = argv[2];
			if(!extract(name, argc == 3 ? argv[3] : getenv("PWD"))) {
				cout << "Failure." << endl;
				return 1;
			}
	} else {
		usage(argv[0]);
		return 1;
	}
	
	return 0;
}