#include <iostream>
#include <vector>
#include <list>


#define ARRAY_SIZE(array)  sizeof(array)/sizeof(array[0])

void delete_vector_even_element(std::vector<int> &vec)
{
	auto it = vec.begin();
	while (it != vec.end()) {
		if(*it % 2 == 0)
			it = vec.erase(it);
		else
			it++;
	}
}

void print_vector_element(const std::vector<int> &vec)
{
	for (auto it = vec.cbegin(); it != vec.cend(); it++){
		std::cout << *it << "  ";
	}
	std::cout << std::endl;
}

void delete_list_odd_element(std::list<int> &list)
{
	auto it = list.begin();
	while (it != list.end()) {
		if(*it % 2 == 0)
			it++;
		else
			it = list.erase(it);
	}
}

void print_list_element(const std::list<int> &list)
{
	for (auto it = list.cbegin(); it != list.cend(); it++){
		std::cout << *it << "  ";
	}
	std::cout << std::endl;
}
int main(int argc, char *argv[])
{
 	int ia[] = {0,1,1,2,3,5,8,13,21,55,89};

	std::list<int> list;
	std::vector<int> vec;

	for ( int i = 0; i < ARRAY_SIZE(ia); i++) {
		list.push_back(ia[i]);
		vec.push_back(ia[i]);
	}

	std::cout << "original list elements: " << std::endl;
	print_list_element(list);
	delete_list_odd_element(list);
	std::cout << "after delte odd  list elements: " << std::endl;
	print_list_element(list);


	std::cout << "original vector elements: " << std::endl;
	print_vector_element(vec);
	delete_vector_even_element(vec);
	std::cout << "after delte even vec elements: " << std::endl;
	print_vector_element(vec);
	return 0;
}
