#ifndef _BASE_H_
#define _BASE_H_

#include <string>
#include <iostream>

class Base{
	public:
		Base(std::string name):basename(name) {}
		std::string name() {return basename;}
		virtual void print(std::ostream &os) {os << basename << "\n";}
	private:
		std::string basename;
};

#endif

