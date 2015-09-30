#include "point.h"

Point global;

Point foo_bar(Point arg)
{
//	Point *heap = new Point(global);
	Point local = arg;
		
//	*heap = local;
	//Point pa[4] = {local,*heap};
//	return *heap;
	return arg;
}

int main(int argc, char *argv[])
{
	Point test;
	foo_bar(test);
	return 0;
}
