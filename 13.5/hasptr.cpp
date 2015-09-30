#include "hasptr.h"

#include <string>
#include <iostream>





void HasPtr::PrintStringAddr(void)
{
	std::cout << "ps add:" << ps << "ps content:" << *ps << std::endl;
}
