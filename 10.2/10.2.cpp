#include <iostream>
#include <algorithm>
#include <list>
#include <string>



int count_nums(const std::list<string> &list, const string &str)
{
	int cnt;
	cnt = std::count(vec.cbegin(),vec.cend(),key_value);
	return cnt;
}

void  print_list(const std::list<string> &list)
{
	for (auto it = list.cbegin(); it != list.cend(); it++) {
		std::cout << *it << "  ";
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	int input;
	int key;
	
	std::vector<int> vec;

	std::cout << "Please input numbers:" << std::endl; 
	while(std::cin >> input) {
		vec.push_back(input);
	}
	std::cin.clear();
	std::cin.sync();

	std::cout << "Vector content:" << std::endl;	
	print_vec(vec);
		
	std::cout << "Please key numbers:" << std::endl; 
	std::cin >> key;

	std::cout << "Key value:" << key << "appear in vector " 
			<<  count_nums(vec,key)  << " times."<<std::endl;
	return 0;
}

