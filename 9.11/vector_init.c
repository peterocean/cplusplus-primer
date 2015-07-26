#include <vector>
#include <iostream>


void print_vector(const std::vector<int> &v, const char *name)
{
	std::cout << "Vector" << name << ":" << std::endl;
	for (auto it = v.cbegin(); it != v.cend(); it++) {
		std::cout << *it;
	}
	std::cout << std::endl;
}


int main(int argc, char *argv[])
{
	std::vector<int> v1 ={1,2,3,4,5,6,7};
	std::vector<int> v2(v1);
	std::vector<int> v3 = v1;

	std::vector<int> v4{4,5,6,7,8};
	std::vector<int> v5(v4.cbegin()+1,v4.cbegin()+4);

	print_vector(v1,"v1");
	print_vector(v2,"v2");
	print_vector(v3,"v3");
	print_vector(v4,"v4");
	print_vector(v5,"v5");

}
