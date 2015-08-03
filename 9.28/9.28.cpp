#include <iostream>
#include <forward_list>

void search_and_insert(std::forward_list<std::string> &list, const std::string key, const std::string newstring)
{
	auto it = list.begin();
	auto prev = list.begin();

	while (it != list.end()) {
		if (*it == key) {
			list.insert_after(it,newstring);
			return;
		} else { 
			prev = it;
			it++;
		}
	}
	list.insert_after(prev,newstring);
}

void print_forward_list(const std::forward_list<std::string> &list)
{
	for (auto it = list.cbegin(); it != list.cend(); it++) {
		std::cout << *it << std::endl;
	}
}

int main(int argc, char *argv[])
{
	std::forward_list<std::string> list;
	list.insert_after(list.before_begin(),"peter");
	list.insert_after(list.before_begin(),"john");
	list.insert_after(list.before_begin(),"lucy");

	std::string key;
	std::string newstring;

	std::cout << "Original forward list:" << std::endl;
	print_forward_list(list);
	std::cin >> key >> newstring;

	search_and_insert(list,key,newstring);
	std::cout << "After insert  forward list:" << std::endl;
	print_forward_list(list);

	std::cout << "Original forward list:" << std::endl;
	print_forward_list(list);
	std::cin >> key >> newstring;

	search_and_insert(list,key,newstring);
	std::cout << "After insert  forward list:" << std::endl;
	print_forward_list(list);
	return 0;
}
