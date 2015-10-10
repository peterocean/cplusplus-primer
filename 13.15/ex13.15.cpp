#include "numbered.h"
#include <iostream>

void f(Numbered s)
{
	std::cout << s.mysn << std::endl;
}

int main(int argc, char *argv[])
{
	Numbered a, b = a, c = b;

	f(a);
	f(b);
	f(c);
}
