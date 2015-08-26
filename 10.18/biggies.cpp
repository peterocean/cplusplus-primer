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
	sort(word.begin(), word.end());
	auto end_unique = unique(word.begin(), word.end());
	word.erase(end_unique,word.end());
	stable_sort(word.begin(),word.end(),isshorter);
}

void biggies(std::vector<std::string> &word, std::vector<std::string>::size_type sz)
{
	elimDups(word);
	auto end_partition = partition(word.begin(),word.end(),
			[sz](const string &s) {return s.size() < sz;});
	auto cnt = word.end()-end_partition;
	std::cout << cnt << "  " << " of lenght " << sz << " longer" << std::endl;

	for_each(end_partition,word.end(),
			[](const std::string &s) {std::cout << s << "  ";});
	std::cout << std::endl;
}



int main(int argc, char *argv[])
{
	std::vector<std::string> word;
	std::string input;
	std::string size;
	int sz;

	if(argc != 2) return -1;
	size = argv[1];
	std::cout << "size:" << size << std::endl;
//	size>>sz;
	std::cout << "sz:" << sz << std::endl;

	while ( std::cin >> input) {
		word.push_back(input);
	}
	
	std::cout << "Original string" << std::endl;
	print_vector(word);

	elimDups(word);

	return 0;
}


