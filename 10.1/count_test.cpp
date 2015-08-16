#include <iostream>
#include <vector>
#include <algorithm>


int count_nums(const std::vector<int> &vec, int key_value)
{
	int cnt;
	cnt = std::count(vec.cbegin(),vec.cend(),key_value);
	return cnt;
}

void  print_vec(const std::vector<int> &vec)
{
	for (auto it = vec.cbegin(); it != vec.cend(); it++) {
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

