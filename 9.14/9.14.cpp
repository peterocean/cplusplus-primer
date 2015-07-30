#include <iostream>
#include <vector>
#include <list>


int main(int argc, char *argv[])
{
	std::list<char *> list1 = {"Peter","John","Paul"};
	std::vector<std::string> v;

	v.assign(list1.cbegin(),list1.cend());

	std::cout << "Output vector:"<< std::endl;
	for (auto it = v.cbegin(); it != v.cend(); it++) {
		std::cout << *it << std::endl;
	}
	return 0;
}
