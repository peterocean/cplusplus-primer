#include "Sales_data.h"
#include <iostream>

using std::cout;
using std::endl;


int main(int argc, char *argv[])
{
	Sales_data book1("book1",20,100);
	Sales_data book2("book2",30,200);

	std::cout << "book1: " << "revenue:" << book1.getRevenue()
			<< " units_sold:" << book1.getUnits() << " average price:"<< book1.avg_price()
			<< std::endl;

	std::cout << "book2: " << "revenue:" << book2.getRevenue() 
			<< " units_sold:"<<book2.getUnits() << " average price:"<< book2.avg_price()
			<< std::endl;

	return 0;
}
