#include <iostream>
#include <list>
#include <forward_list>



void print_forward_list(const std::forward_list<int> list)
{
	for (auto it = list.cbegin(); it != list.cend(); it++) 
		std::cout << *it << " ";
	std::cout << std::endl;
}



void search_and_delete(std::forward_list<int> list)
{
	auto prev = list.before_begin();
	auto curr = list.begin();

	while (curr != list.end()) {
		if (*curr % 2) {
			curr = list.erase_after(prev);
		} else {
			prev = curr;
			++curr;
		}
	}
}

int main(int argc, char *argv[])
{
	std::forward_list<int> list = {1,2,3,4,5,6,7,8,9,10};
	std::cout << "Original forward_list:" << std::endl;
	print_forward_list(list);

	search_and_delete(list);
	std::cout << "After delete:" << std::endl;
	print_forward_list(list);

}




