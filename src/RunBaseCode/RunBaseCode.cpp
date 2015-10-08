#include "Foo.h"
#include "Bar.h"
#include <iostream>

int main(int argc, char* argv[])
{
	Foo foo;
	foo.setFlag(true);
	Bar bar;
	bar.setFlag(false);

	std::cout << "Result Sum        : " << foo.sum(3, 4) << std::endl;
	std::cout << "Return Flag (Foo) : " << foo.getFlag() << std::endl;
	std::cout << "Return Flag (Bar) : " << bar.getFlag() << std::endl;

	return 0;
}
