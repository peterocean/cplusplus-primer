#include "employee.h"

#include <string>
#include <iostream>


using std::string;

Employee::Employee(const string &name) 
{
	this->name = name;
	id = s_inc++;
}

void Employee::print_employee_info(void) const
{
	std::cout <<  "name:" << name << "  id" << id << std::endl;
}
int Employee::s_inc = 0;
