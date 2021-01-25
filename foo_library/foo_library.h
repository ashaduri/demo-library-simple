/**************************************************************************
Copyright (C) 2021 Alexander Shaduri
License: 0BSD (Zero-Clause BSD)
***************************************************************************/
#ifndef FOO_LIBRARY_H
#define FOO_LIBRARY_H

#include "foo_support.h"


// All member functions of this class are exported
class FOO_LIBRARY_EXPORT FooClass {
	public:
		// Avoid using inline functions to access class data members,
		// otherwise they will also be exported.
		void setA(int value);
		int getA();

	private:
		int a = 0;
};


// Export a single global function
FOO_LIBRARY_EXPORT
void fooPublicFunction();



#endif
