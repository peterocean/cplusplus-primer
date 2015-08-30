#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <algorithm>



using std::vector;
using std::list;
using std::string;

void print_vector(const vector<int> vec)
{
	for (auto it = vec.cbegin(); it != vec.cend(); it++) {
		std::cout << *it << "  ";
	}
	std::cout << std::endl;
}

void print_list(const list<int> list)
{
	for (auto it = list.cbegin(); it != list.cend(); it++) {
		std::cout << *it << "  ";
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	vector<int> vec;
	list<int> list;
	int input;

	while (std::cin >> input)
		vec.push_back(input);
	std::cout << "vector:"<<std::endl;
	print_vector(vec);
	unique_copy(vec.cbegin(),vec.cend(),back_inserter(list));

	std::cout << "list:" << std::endl;
	print_list(list);

}



