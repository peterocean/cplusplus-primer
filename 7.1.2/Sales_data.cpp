#include "Sales_data.h"


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

unsigned int Sales_data::getUnits() const
{
	return units_sold;
}

