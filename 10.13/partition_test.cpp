#include <iostream>
#include <vector>
#include <algorithm>


static bool compare_size(const std::string &s)
{
	return s.size() < 5;
}

void print_vector(const std::vector<std::string> &vec)
{
	for (auto it  = vec.cbegin(); it != vec.cend(); it++) {
		std::cout << *it << "  ";
	}   
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	std::vector<std::string> word;
	std::string input;

	while (std::cin >> input) 
		word.push_back(input);

	std::cout << "Original string:" << std::endl;
	print_vector(word);

	std::cout << "After partition():"<<std::endl;
	auto end_partition = partition(word.begin(),word.end(),compare_size);
	
	std::cout << word.end()-end_partition << "words >= 5." << std::endl;
	for (auto it = end_partition; it != word.end(); it++) {
		std::cout << *it << "  ";
	}
	std::cout << std::endl;
	return 0;
}

