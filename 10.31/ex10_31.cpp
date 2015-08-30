#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>


int main(int argc, char *argv[])
{
	std::istream_iterator<int> in(std::cin), eof;
	std::ostream_iterator<int> out(std::cout," ");

	std::vector<int> vec;

	copy(in,eof,back_inserter(vec));
	std::cout <<"original input:" << std::endl;
	copy(vec.cbegin(),vec.cend(),out);
	std::cout << std::endl;

	sort(vec.begin(),vec.end());
	std::cout <<"sort output:" << std::endl;
	copy(vec.cbegin(),vec.cend(),out);
	std::cout << std::endl;

	std::cout <<"unique copy  output:" << std::endl;
	unique_copy(vec.cbegin(),vec.cend(),out);
	std::cout << std::endl;
	return 0;
}
