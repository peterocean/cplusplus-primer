#include "quote.h"
#include "bulk_quote.h"


Bulk_quote::Bulk_quote(const std::string &book, double sales_price, std::size_t _min_qty, double _discount) :
	Quote(book,sales_price),min_qty(_min_qty),discount(_discount){}


double Bulk_quote::net_price(std::size_t cnt) const 
{
	if (cnt >= min_qty)
		return cnt*(1-discount)*price;
	else
		return cnt*price;
}

void Bulk_quote::debug(void) const
{
	std::cout << "data member of this class:\n"
			<< "min_qty=" << this->min_qty << " "
			<< "discount" << this->discount << " "
			<< std::endl;
}
