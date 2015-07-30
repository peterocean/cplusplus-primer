#include <iostream>
#include <vector>
#include <list>

void divide(std::list<int> &list, std::vector<int> &odd, std::vector<int> &even)
{
	for (auto it = list.cbegin(); it != list.cend(); it++) {
		if (*it % 2 == 0) 
			even.push_back(*it);
		else
			odd.push_back(*it);
	}
}

void print_vector(std::vector<int> &v)
{
	for (auto it = v.cbegin(); it != v.cend(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}


int main(int argc, char *argv[])
{
	std::list<int> list{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	std::vector<int> odd;
	std::vector<int> even;

	std::cout << "vector odd'size:" << odd.size() 
			<< "  vector even'sized:" << even.size() << std::endl;

	divide(list,odd,even);	

	std::cout << "After divided:" << std::endl;
	std::cout << "vector odd'size:" << odd.size() 
			<< "  vector even'sized:" << even.size() << std::endl;

	std::cout << "odd vector:" << std::endl;
	print_vector(odd);
	std::cout << "even vector:" << std::endl;
	print_vector(even);
}
