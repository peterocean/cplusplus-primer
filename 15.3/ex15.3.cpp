#include "quote.h"
#include <iostream>




int main(int argc, char *argv[])
{
	Quote q("book1", 100);
	print_total(std::cout, q,12);
}
