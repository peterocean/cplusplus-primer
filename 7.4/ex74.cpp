#include "screen.h"
#include <iostream>


using std::cout;

int main(int argc, char *argv[])
{
	Screen s1(3,4,'c');
	Screen s2(5,6);

	s2.display(cout);
	s1.display(cout);

//	s1.display(cout).move(2,3).set('s');
	s1.move(1,2).set('s').display(cout);	
	return 0;
}
