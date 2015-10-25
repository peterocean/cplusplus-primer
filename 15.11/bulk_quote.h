#ifndef _BULK_QUOTE_H_
#define _BULK_QUOTE_H_

#include "quote.h"
#include <string>



class Bulk_quote:public Quote{
	public:
		Bulk_quote() = default;
		Bulk_quote(const std::string &book, double sales_price, std::size_t _min_qty,double _discount);
		double net_price(std::size_t cnt) const override;
		void debug(void) const;
	private:
		std::size_t min_qty = 0;
		double discount = 0;
};


#endif
