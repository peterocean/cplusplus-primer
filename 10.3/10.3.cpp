#include <iostream>
#include <numeric>
#include <vector>


int accumulate_test(const std::vector<int> &vec)
{
	return accumulate(vec.cbegin(),vec.cend(),0);
}


int main(int argc, char *argv[])
{
	std::vector<int> vec;

	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	std::cout << "Accumulate vector:" << std::endl;
	std::cout << accumulate_test(vec) << std::endl;
}
