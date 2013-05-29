#ifndef _FACTORY_HPP_
#define _FACTORY_HPP_

#include <QString>
#include <QStringList>
#include <QMap>

namespace Compiler
{
	class Base;
	
	class Compilers
	{
	public:
		Compilers();
		~Compilers();
		
		static Compilers *instance();
		
		bool addCompiler(const Base *compiler);
		void removeCompiler(const QString& name);
		
		QStringList compilerNames() const;
		const Base *compiler(const QString& name) const;
		QList<const Base *> compilers() const;
	private:
		QMap<QString, const Base *> m_compilers;
	};
}

#endif
