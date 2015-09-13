#include "Sales_data.h"
#include <iostream>


Sales_data&  Sales_data::combine(const Sales_data &other)
{
	units_sold += other.units_sold;
	revenue += other.revenue;
	return *this;
}

double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue/units_sold;
	else
		return 0;
}

double Sales_data::getRevenue() const
{
	return revenue;
}

void Sales_data::setRevenue(double r)
{
	revenue = r;
}
unsigned int Sales_data::getUnits() const
{
	return units_sold;
}

void Sales_data::setUnits(unsigned int num)
{
	units_sold = num;
}

double Sales_data::getPrice() const
{
	return price;
}

Sales_data add(const Sales_data &s1, const Sales_data &s2)
{
	return Sales_data(s1.getUnits()+ s2.getUnits(),	s2.getRevenue() + s2.getRevenue());
}

std::istream &read(std::istream &is, Sales_data &item)
{
	is >> item.bookNo >> item.price >> item.units_sold;
	item.setRevenue(item.price * item.units_sold);
	return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << "ISBN:" << item.isbn() << " " << "price:" << item.getPrice() << " "
		<< "revenue:" << item.getRevenue() << " " << "average price:" << item.avg_price()
		<<std::endl;
	return os;
}














