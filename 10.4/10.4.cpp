#include <iostream>
#include <numeric>
#include <vector>


float accumulate_test(const std::vector<float> &vec)
{
	return accumulate(vec.cbegin(),vec.cend(),(float)0);
}


int main(int argc, char *argv[])
{
	std::vector<float> vec;

	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}
	vec.push_back(8.8);

	std::cout << "Accumulate vector:" << std::endl;
	std::cout << accumulate_test(vec) << std::endl;
}
