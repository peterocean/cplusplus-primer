#include "base.h"
#include "derived.h"
#include <iostream>


int main(int artc, char *argv[])
{
	Base bobj("bobj");
	Derived dobj("dboj");
	
	Base *bp1 = &bobj;
	Base &br1 = bobj;
	Derived *bp2 = &dobj;
	Derived &br2 = dobj;

	bobj.print(std::cout);
	dobj.print(std::cout);
	
	bp1->name();
	bp2->name();
	br1.print(std::cout);
	br2.print(std::cout);
	return 0;
}
