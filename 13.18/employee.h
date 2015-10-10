#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <string>

using std::string;

class Employee{
	public:
		Employee(const string & name);
		Employee(const Employee & e) = delete;
		Employee& operator=(const Employee &e) = delete;
		void print_employee_info(void) const;
	private:
		int id;
		string name;
		static int s_inc;
		Employee() = default;
};

#endif


