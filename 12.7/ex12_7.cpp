#include <vector>
#include <iostream>
#include <iterator>
#include <memory>

using std::vector;

std::shared_ptr<vector<int>> get_vector(void)
{
	std::shared_ptr<vector<int>> p = std::make_shared<vector<int>>();
	return p;
}

void fill_vector(std::shared_ptr<vector<int>> p)
{
	std::istream_iterator<int> input(std::cin),eof;

	while ( input != eof)
		p->push_back(*input++);
}

void print_vector(std::shared_ptr<vector<int>> p)
{
	for (auto it = p->cbegin(); it != p->cend(); it++) {
		std::cout << *it << " "; 
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	std::shared_ptr<vector<int>> p = get_vector();
	fill_vector(p);
	print_vector(p);
	return 0;
}
	
