#include <iostream>
#include "base.h"



int main(int argc, char *argv[])
{
	Pub_Derv d1;
	Priv_Derv d2;
	Prot_Derv d3;

	Base *p = &d1;
	p = &d3;
	p = &d2;


	return 0;
}
