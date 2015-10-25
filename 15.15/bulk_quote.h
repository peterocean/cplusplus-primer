#ifndef _BULK_QUOTE_H_
#define _BULK_QUOTE_H_

#include "quote.h"
#include "disc_quote.h"
#include <string>



class Bulk_quote:public Disc_quote{
	public:
		Bulk_quote() = default;
		Bulk_quote(const std::string &book, double sales_price, std::size_t qty,double discount) :
			Disc_quote(book,sales_price,qty,discount) {}
		double net_price(std::size_t cnt) const override;
};


#endif
