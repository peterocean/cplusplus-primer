#include <iostream>


int main(int argc, char *argv[])
{
	int i = 7;

	std::cout << "original i = "<< i<<std::endl;	
	auto check_and_dec = [i]() mutable {return --i ? false:true;};
	while(!check_and_dec())
		std::cout << "i = "<< i << "  ";	
	std::cout << i << std::endl;
	return 0;
}
