#include "point.h"

#include <iostream>

Point::Point()
{
	x = 0;
	y = 0;
	std::cout << "point() called." << std::endl;
}

Point::Point(const Point &p)
{
	x = p.x;
	y = p.y;
	std::cout << "point(const Point &) called." << std::endl;
}
