#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>


int main(int argc, char *argv[])
{
	if (argc != 4) return -1;
	std::ifstream inputfile(argv[1]);
	std::ofstream odd_file(argv[2]);
	std::ofstream even_file(argv[3]);

	std::istream_iterator<int> in(inputfile), eof;
	std::ostream_iterator<int> out_to_odd(odd_file," ");
	std::ostream_iterator<int> out_to_even(even_file, "\n");

	while(in != eof) {
		if(*in % 2 == 0) *out_to_even++ = *in;
		else *out_to_odd++ = *in;
		in++;
	}
	return 0;
}
