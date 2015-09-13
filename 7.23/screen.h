#ifndef _SCREEN_H_
#define _SCREEN_H_

#include <string>
#include <iostream>

class Screen{
	public:
		typedef std::string::size_type pos;
		Screen() = default;
		Screen(pos ht, pos wd, char c) : height(ht), width(wd),contents(ht*wd,c){}
		Screen(pos ht, pos wd) :height(ht), width(wd),contents(ht*wd,' '){}

		char get() const;
		char get(pos r, pos c) const;
		Screen &move(pos r, pos c);
		const Screen& display(std::ostream &os) const;

		Screen& set(char c);

	private:
		pos cursor = 0;
		pos height =0, width = 0;
		std::string contents;
};

#endif
