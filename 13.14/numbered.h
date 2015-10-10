#ifndef _NUMBERED_H_
#define _NUMBERED_H_
#include <stdlib.h>


class Numbered{
	public:
		Numbered(int id = rand()):mysn(id){}
	private:
		int mysn;	
	friend void f(Numbered s);
};



#endif
