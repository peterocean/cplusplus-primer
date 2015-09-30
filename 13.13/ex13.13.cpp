#include "x.h"
#include <iostream>
#include <vector>





int main(int argc, char *argv[])
{
	X x1;
	X x2;
	x2 = x1;
	std::vector<X> x = {x1,x2,};
	return 0;
}
