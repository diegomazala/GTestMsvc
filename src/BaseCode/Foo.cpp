#include "Foo.h"

Foo::Foo()
{
}


Foo::~Foo()
{
}

void Foo::setFlag(bool _flag)
{
	flag = _flag;
}

bool Foo::getFlag()
{
	return flag;
}


int Foo::sum(int a, int b)
{
	return a + b;
}