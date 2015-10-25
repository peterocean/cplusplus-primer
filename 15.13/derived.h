#ifndef _DERIVED_H_
#define _DERIVED_H_

#include "base.h"
#include <iostream>
#include <string>

class Derived : public Base {
	public:
		Derived(std::string name) : Base(name) 
		{
			i = 0;
		}
		void print(std::ostream &os) 
		{ 
			this->Base::print(os); 
			os << " " <<i << std::endl;
		}
	private :
		int i;
};

#endif
