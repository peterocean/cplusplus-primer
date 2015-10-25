#include "quote.h"

#include <string>
#include <iostream>

double print_total(std::ostream &os, const Quote& item, size_t n)
{
	double net_price = item.net_price(n);
	os << "ISBN:" << item.isbn()
		<<"# sold: " << n << "total due:" << net_price << std::endl;
	return net_price;
}

void Quote::debug(void) const
{
	std::cout << "data member of this class:\n"
			<< "bookNo=" << this->bookNo << " "
			<< "price=" << this->price << " "
			<< std::endl;
}
