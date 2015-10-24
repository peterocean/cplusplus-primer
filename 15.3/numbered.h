#ifndef _NUMBERED_H_
#define _NUMBERED_H_
#include <stdlib.h>
#include <iostream>


class Numbered{
	public:
		Numbered(int id = rand()):mysn(id){}
		Numbered(const Numbered &num)
		{
			mysn = rand();
			std::cout << "msyn:" << mysn << std::endl;
		}
	private:
		int mysn;	
	friend void f(const Numbered &s);
};



#endif
