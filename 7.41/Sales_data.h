#ifndef _SALES_DATA_H_
#define _SALES_DATA_H_

#include <string>
#include <iostream>

class Sales_data {
	public:
		Sales_data(std::string s,double price,unsigned int num) 
			: bookNo(s), units_sold(num),revenue(num*price){
				std::cout <<"Call constructor Sales_data(std::string s,double price,unsigned int num)" 
						<< std::endl;
			}
		Sales_data():Sales_data("",0,0){
			std::cout <<"Call constructor Sales_data()" 
					<< std::endl;
		}
		Sales_data(std::string s):Sales_data(s,0,0){
			std::cout <<"Call constructor Sales_data(std::string s)" 
					<< std::endl;
		}
		std::string isbn() const {
			return bookNo;
		}
		Sales_data &combine(const Sales_data &other);
		double avg_price() const;
		double getRevenue() const;
		unsigned int getUnits() const;
	private:
		std::string bookNo;
		unsigned int units_sold = 0;
		double revenue = 0;
};


#endif

