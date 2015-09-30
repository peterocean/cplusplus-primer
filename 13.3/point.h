#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

class Point{
	public:
		Point(const Point &p);
		Point();
		Point(float xx,float yy) :x(xx),y(yy)
		{
			std::cout << "Point(x,y) called" << std::endl;
		}
	private:
		float x;
		 float y;
};


#endif
