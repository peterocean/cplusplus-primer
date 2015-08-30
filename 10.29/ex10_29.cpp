#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>

using std::string;

int main(int argc, char *argv[])
{
	std::ifstream ifs("test.txt");
	std::vector<string> vec;
	std::istream_iterator<string> in(ifs), eof;

	std::copy(in,eof,back_inserter(vec));

	//output
	std::copy(vec.cbegin(),vec.cend(),std::ostream_iterator<string>(std::cout," "));
	std::cout << std::endl;
}

