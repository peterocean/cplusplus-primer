#include "hasptr.h"



int main(int argc, char *argv[])
{
	HasPtr ptr1;
	HasPtr ptr2 = ptr1;
	HasPtr ptr3;

	ptr1.PrintStringAddr();
	ptr2.PrintStringAddr();
	ptr3.PrintStringAddr();

	ptr3 = ptr1;
	ptr3.PrintStringAddr();
	return 0;
}
