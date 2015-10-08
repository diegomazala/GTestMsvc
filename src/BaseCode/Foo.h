#ifndef __FOO_H__
#define __FOO_H__

#include <iostream>

class Foo
{
public:
	Foo();
	virtual ~Foo();

	virtual void setFlag(bool _flag);
	virtual bool getFlag();

	virtual int sum(int a, int b);

protected:
	bool flag;
};


#endif // __FOO_H__