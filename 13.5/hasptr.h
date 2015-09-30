#ifndef _HASPTR_H_
#define _HASPTR_H_

#include <string>


class HasPtr{
	public:
		HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0){}
		HasPtr(const HasPtr & has) : ps(new std::string(*has.ps)),i(has.i) {}
		void PrintStringAddr(void);
	private:
		std::string *ps;
		int i;
};

#endif
