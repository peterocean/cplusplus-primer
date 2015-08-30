#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <algorithm>


void print_vector(const std::vector<int> &vec)
{
	for (auto it = vec.cbegin(); it != vec.cend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void reverse_print_vector(const std::vector<int> &vec)
{
	for (auto it = vec.crbegin(); it != vec.crend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	std::vector<int> vec;
	std::istream_iterator<int> int_in(std::cin), eof;

	while(int_in != eof)
		vec.push_back(*int_in++);

	std::cout << "vec print in sequence:" << std::endl;
	print_vector(vec);

	std::cout << "vec print in reverse sequence:" << std::endl;
	reverse_print_vector(vec);

	//10_36
	std::list<int> list = {1,2,0,6,8,0,9,0,1};
	auto rzero = find(list.crbegin(),list.crend(),0);
	std::cout << std::distance(rzero,list.crend()) << std::endl;
	return 0;
}





