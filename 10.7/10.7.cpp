#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>

//#define TESTA 1
#define TESTB_BUG_FIXED 1
void print_vector(std::vector<int> &vec)
{
	for (auto it = vec.cbegin(); it != vec.cend(); it++) {
		std::cout << *it << "  ";
	}
	std::cout << std::endl;
}

#ifdef TESTA
int main(int argc, char *argv[])
{
	std::vector<int> vec;
	std::list<int> lst;
	int i;

	while (std::cin >> i) 
		lst.push_back(i);
	
	std::cout << "Original vector:" << std::endl;
	print_vector(vec);
	copy(lst.cbegin(), lst.cend(), vec.begin());
	std::cout << "After copy  vector:" << std::endl;
	print_vector(vec);
	return 0;
}
#else
#ifndef TESTB_BUG_FIXED
int main(int argc, char*argv[])
{
	std::vector<int> vec;
	vec.reserve(10);
	std::cout << "vector size and capacity is:"
			<< vec.size() << ","<< vec.capacity()
			<<std::endl;

	std::cout << "Original vector:" << std::endl;
	print_vector(vec);
	fill_n(vec.begin(),10,0);
	std::cout << "After fill  vector:" << std::endl;
	print_vector(vec);
	
}
#else
int main(int argc, char*argv[])
{
	std::vector<int> vec;
	vec.reserve(10);
	std::cout << "vector size and capacity is:"
			<< vec.size() << ","<< vec.capacity()
			<<std::endl;

	std::cout << "Original vector:" << std::endl;
	print_vector(vec);
	fill_n(back_inserter(vec),10,0);
	std::cout << "After fill  vector:" << std::endl;
	print_vector(vec);
	
}
#endif
#endif
