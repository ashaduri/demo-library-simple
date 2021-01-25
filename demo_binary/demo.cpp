/**************************************************************************
Copyright (C) 2021 Alexander Shaduri
License: 0BSD (Zero-Clause BSD)
***************************************************************************/

#include "foo_library.h"

#include <iostream>


int main()
{
	FooClass foo;
	foo.setA(5);
	std::cout << "FooClass::a is " << foo.getA() << std::endl;
	fooPublicFunction();

	return 0;
}
