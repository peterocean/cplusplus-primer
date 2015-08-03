#include <iostream>
#include <forward_list>


void print_forward_list(const std::forward_list<int> &list)
{
	for (auto it = list.cbegin(); it != list.cend(); it++) {
		std::cout << *it << "  ";
	}   
	std::cout << std::endl;
}


void delete_and_copy_forward_list(std::forward_list<int> &list)
{
	auto prev = list.begin();
	auto cur = list.begin();

	while (cur != list.end()) {
		if (*cur % 2) {
			cur  = list.insert_after(cur,*cur);
			prev = cur;
			cur++;
		} else {
			cur = list.erase_after(prev);
			prev = cur;
		}
	}
}

int main(int argc, char *argv[])
{
	std::forward_list<int> list = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	std::cout << "Original list:" << std::endl;
	print_forward_list(list);
	delete_and_copy_forward_list(list);
	std::cout << "After delete and copy" << std::endl;
	print_forward_list(list);

}

