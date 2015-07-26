#include <list>
#include <vector>
#include <iostream>

void print_list(std::list<int> list, const char *key_string)
{
	std::cout << key_string << std::endl; 
	for (auto it = list.cbegin(); it != list.cend(); it++) {
		std::cout << *it;
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	std::vector<double> vdouble{1,2,3,4,5,6,7,8,9};	
	std::list<int> list1(vdouble.cbegin(),vdouble.cend());
	print_list(list1,"vector double initialize list<int>");

	std::vector<int> vint{4,5,6,8,9,10};
	std::list<int> list2(vint.cbegin(),vint.cend());
	print_list(list2,"vector int  initialize list<int>");

}
