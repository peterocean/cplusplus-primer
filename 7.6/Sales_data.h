#ifndef _SALES_DATA_H_
#define _SALES_DATA_H_

#include <string>

class Sales_data {
	public:
		Sales_data() = default; 
		Sales_data(std::string s,double p,unsigned int num) 
			: bookNo(s), price(p),units_sold(num),revenue(num*p){}
		Sales_data(unsigned int num, double r) 
			: units_sold(num), revenue(r){}

		friend Sales_data add(const Sales_data &s1, const Sales_data &s2);
		friend std::istream &read(std::istream &is, Sales_data &item);
		friend std::ostream &print(std::ostream &os, const Sales_data &item);
		std::string isbn() const {
			return bookNo;
		}
		Sales_data &combine(const Sales_data &other);
		double avg_price() const;
		double getRevenue() const;
		unsigned int getUnits() const;
		double getPrice() const;

		void setRevenue(double r);
		void setUnits(unsigned int num);
		
	private:
		std::string bookNo;
		double price = 0;
		unsigned int units_sold = 0;
		double revenue = 0;
};


#endif

