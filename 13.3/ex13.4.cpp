#include "point.h"

Point global;

Point foo_bar(Point arg)
{
	Point local = arg;
	Point *heap= new Point(global);

	*heap = local;
//	Point pa[4] = {local,*heap};
	return *heap;
}

int main(int argc, char *argv[])
{
	Point test;
	foo_bar(test);
	return 0;
}
