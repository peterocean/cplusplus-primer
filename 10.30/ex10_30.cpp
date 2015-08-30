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

	sort(vec.begin(),vec.end());
	copy(vec.cbegin(),vec.cend(),out);
	return 0;
}
