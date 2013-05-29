#include "pcompiler/compilers.hpp"
#include "pcompiler/base.hpp"

#include "compilers/c/c.hpp"
#include "compilers/cpp/cpp.hpp"
#include "compilers/o/o.hpp"

#include <QDebug>

using namespace Compiler;

Compilers::Compilers()
{
}

Compilers::~Compilers()
{
	qDeleteAll(m_compilers.values());
}

Compilers *Compilers::instance()
{
	static Compilers compilers;
	return &compilers;
}

bool Compilers::addCompiler(const Base *compiler)
{
	const QString& name = compiler->name();
	QMap<QString, const Base *>::iterator it = m_compilers.find(name);
	if(it != m_compilers.end()) return false;
	m_compilers[name] = compiler;
	return true;
}

void Compilers::removeCompiler(const QString& name)
{
	m_compilers.remove(name);
}

QStringList Compilers::compilerNames() const
{
	return QStringList(m_compilers.keys());
}

const Base *Compilers::compiler(const QString& name) const
{
	QMap<QString, const Base *>::const_iterator it = m_compilers.find(name);
	if(it != m_compilers.end()) return 0;
	return *it;
}

QList<const Base *> Compilers::compilers() const
{
	return m_compilers.values();
}