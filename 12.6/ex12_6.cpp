#include <vector>
#include <iostream>
#include <iterator>
#include <memory>

using std::vector;

vector<int> *get_vector(void)
{
	vector<int> *p = new(vector<int>);
	return p;
}

void fill_vector(vector<int> *p)
{
	std::istream_iterator<int> input(std::cin),eof;

	while ( input != eof)
		p->push_back(*input++);
}

void print_vector(const vector<int> *p)
{
	for (auto it = p->cbegin(); it != p->cend(); it++) {
		std::cout << *it << " "; 
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	vector<int> *p = get_vector();
	fill_vector(p);
	print_vector(p);
	delete(p);
	return 0;
}
	
