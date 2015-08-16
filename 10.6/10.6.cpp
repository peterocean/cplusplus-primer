#include <iostream>
#include <algorithm>
#include <vector>


void fill_n_test(std::vector<int> &vec)
{
	fill_n(vec.begin(),vec.size(),0);
	return;
}


void print_vector(const std::vector<int> &vec)
{
	for (auto it = vec.cbegin(); it != vec.cend(); it++) {
		std::cout << *it << "  ";
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	std::vector<int> vec;

	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	std::cout << "original vector:" << std::endl;
	print_vector(vec);

	std::cout << "After fill:" << std::endl;
	fill_n_test(vec);
	print_vector(vec);
	
}
