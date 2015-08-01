#include <iostream>
#include <vector>


int main(int argc, char *argv[])
{
	std::vector<int> v1 = {1,2,3,4};
	std::vector<int> v2;

	std::cout << "v1 first element:" << std::endl;
	std::cout << "v1.cbegin(): " << *v1.cbegin() << std::endl;
	std::cout << "v1.front(): " << v1.front() << std::endl;
	std::cout << "v1[0]: " << v1[0] << std::endl;
	std::cout << "v1.at[0]: " << v1.at(0) << std::endl;

	std::cout << "v2 first element:" << std::endl;
	std::cout << "v2.at(0): " << v2.at(0) << std::endl;
	std::cout << "v2[0]: " << v2[0] << std::endl;
	std::cout << "v2.cbegin(): " << *v2.cbegin() << std::endl;
	std::cout << "v2.front(): " << v2.front() << std::endl;
}
