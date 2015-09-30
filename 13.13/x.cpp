#include "x.h"
#include <iostream>

X::X()
{
	std::cout << "X() called." << std::endl;
}

X::~X()
{
	std::cout << "~X() called." << std::endl;
}

X& X::operator=(const X& x)
{
	std::cout << "operator= called." << std::endl;
}

X::X(const X& x)
{
	std::cout << "X(const X&) called.." << std::endl;
}
