#ifndef _QUOTE_H_
#define _QUOTE_H_


#include <string>
#include <iostream>

class Quote{
	public:
		Quote() = default;
		Quote(const std::string &book, double sales_price):bookNo(book),price(sales_price){}

		std::string isbn() const {return bookNo;}
		virtual double net_price(std::size_t n) const
		{
			return n*price;
		}
		virtual ~Quote() = default;
		virtual void debug(void) const;
		friend double print_total(std::ostream &os, const Quote &item, size_t n);
	private:
		std::string bookNo;
	protected:
		double price = 0.0;
};


double print_total(std::ostream &os, const Quote &item, size_t n);
#endif
