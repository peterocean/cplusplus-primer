#include "StrBlob.h"
#include <iostream>

int  main(int argc, char *argv[])
{
	StrBlob b1;

	{
		StrBlob b2 = {"a","an","the"};
		b1 = b2;
		b2.push_back("about");
		std::cout << "b2.size()" << b2.size() << std::endl;
	}

	std::cout << "b1.size()" << b1.size() << std::endl;

	return 0;
}
