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
	vector<int> vec{1,2,3,4,5,6,7,8,9};
	list<int> list1;
	list<int> list2;
	list<int> list3;
	
	std::cout << "vector:"<<std::endl;
	print_vector(vec);

	copy(vec.cbegin(),vec.cend(),inserter(list1,list1.begin()));
	copy(vec.cbegin(),vec.cend(),back_inserter(list2));
	copy(vec.cbegin(),vec.cend(),front_inserter(list3));

	std::cout << "inserter list1:" << std::endl;
	print_list(list1);
	std::cout << "back_inserter list2:" << std::endl;
	print_list(list2);
	std::cout << "front_inserter list3:" << std::endl;
	print_list(list3);
}



