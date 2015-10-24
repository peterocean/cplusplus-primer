#include "quote.h"
#include "bulk_quote.h"
#include <iostream>




int main(int argc, char *argv[])
{
	Quote q("book1", 100);
	Bulk_quote b("book2",50,100,0.2);
	print_total(std::cout, q,12);
	print_total(std::cout, b,300);
}
