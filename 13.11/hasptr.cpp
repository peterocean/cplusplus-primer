#include "hasptr.h"

#include <string>
#include <iostream>

HasPtr::~HasPtr()
{
	std::cout << "~HasPtr() called." << std::endl;
	delete ps;
}
HasPtr & HasPtr::operator=(const HasPtr &hp)
{
	std::cout << "operator = called." << std::endl;
	std::string *new_ps = new std::string(*hp.ps);
	delete ps;
	ps = new_ps;
	i = hp.i;
	return *this;
}


void HasPtr::PrintStringAddr(void)
{
	std::cout << "ps add:" << ps << "ps content:" << *ps << std::endl;
}
