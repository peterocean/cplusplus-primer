#include "Sales_data.h"
#include <iostream>

using std::cout;
using std::endl;


int main(int argc, char *argv[])
{
	Sales_data book1;
	Sales_data book2("book1");
	Sales_data book3("book3",10,20);

	std::cout << book1 << std::endl;
	std::cout << book2 << std::endl;
	std::cout << book3 << std::endl;

	return 0;
}
