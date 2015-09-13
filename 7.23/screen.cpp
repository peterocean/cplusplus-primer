#include "screen.h"
#include <iostream>


char Screen::get() const
{
	return contents[cursor];
}


inline char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}


Screen & Screen::move(pos r, pos c)
{
	pos row = r *width;
	cursor = row + c;
	return *this;
}

const Screen& Screen::display(std::ostream &os) const
{
	for (int r = 0; r < height; r++) {
		for ( int c = 0; c < width; c++) {
			os << contents[r*width + c];
		}
		os << std::endl;
	}
	return *this;
}

Screen&  Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}




