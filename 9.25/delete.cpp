#include <iostream>
#include <vector>


void delete_vector_odd_element(std::vector<int> &vec)
{
	auto it = vec.begin();
	while (it != vec.end()) {
		if(*it % 2 == 0)
			it++;
		else
			it = vec.erase(it);
	}
}

void print_vector_element(const std::vector<int> &vec)
{
	for (auto it = vec.cbegin(); it != vec.cend(); it++){
		std::cout << *it << "  ";
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	std::vector<int > vec{1,2,3,4,5,6,7,8,9};

	std::cout << "original vector:" << std::endl;
	print_vector_element(vec);

	delete_vector_odd_element(vec);
	std::cout << "after delete odd elements:" << std::endl;
	print_vector_element(vec);

	vec.erase(vec.begin(),vec.begin());
	std::cout << "after delete same elements:" << std::endl;
	print_vector_element(vec);

	vec.erase(vec.end(),vec.end());
	std::cout << "after delete same end elements:" << std::endl;
	print_vector_element(vec);
	
	vec.erase(vec.begin()+2,vec.end());
	std::cout << "after delete same end elements:" << std::endl;
	print_vector_element(vec);

	return 0;
}
