#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

static int isshorter(const string &s1, const std::string &s2)
{
	return s1.size() < s2.size();
}

void print_vector(const std::vector<std::string> &vec)
{
	for (auto it  = vec.cbegin(); it != vec.cend(); it++) {
		std::cout << *it << "  ";
	}
	std::cout << endl;
}


void elimDups(std::vector<std::string> &word)
{
	//auto end_unique;

	sort(word.begin(), word.end());
	std::cout << "After sort():" << std::endl;
	print_vector(word);
	
	auto end_unique = unique(word.begin(), word.end());
	std::cout << "After unique():" << std::endl;
	print_vector(word);

	word.erase(end_unique,word.end());
	std::cout << "After erase():" << std::endl;
	print_vector(word);

	std::cout << "After stable sort():" << std::endl;
	stable_sort(word.begin(),word.end(),isshorter);
	print_vector(word);
}


int main(int argc, char *argv[])
{
	std::vector<std::string> word;
	std::string input;

	while ( std::cin >> input) {
		word.push_back(input);
	}
	
	std::cout << "Original string" << std::endl;
	print_vector(word);

	elimDups(word);

	return 0;
}


