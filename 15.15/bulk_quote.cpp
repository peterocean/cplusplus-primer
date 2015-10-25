#include "quote.h"
#include "bulk_quote.h"




double Bulk_quote::net_price(std::size_t qty) const 
{
	if (qty >= quantity)
		return qty*(1-discount)*price;
	else
		return qty*price;
}
