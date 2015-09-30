#include "Sales_data.h"
#include <iostream>

using std::cout;
using std::endl;

bool fcn(const Sales_data *trans, Sales_data accum)
{
	Sales_data item1(*trans), item2(accum);
	return item1.isbn() != item2.isbn();
}

int main(int argc, char *argv[])
{
	Sales_data book1("book1");
	Sales_data book2("book2");
	fcn(&book1,book2);
	return 0;
}
