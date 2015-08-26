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




int main(int argc, char *argv[])
{
	std::vector<std::string> word;
	std::string input;
	std::string size;
	int sz;
	int cnt;

	if(argc != 2) return -1;
	sz = atoi(argv[1]);
	//std::cout << "size:" << size << std::endl;
	std::cout << "sz:" << sz << std::endl;

	while ( std::cin >> input) {
		word.push_back(input);
	}
	
	std::cout << "Original string" << std::endl;
	print_vector(word);

	cnt = count_if(word.begin(),word.end(),
			[sz] (const string &s)->int
			{return s.size() > sz;});
	std::cout << cnt << " words length bigger than " << sz << std::endl;
	return 0;
}


