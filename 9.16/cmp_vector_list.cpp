#include <iostream>
#include <vector>

int compare_vector(const std::vector<int> &v1, const std::vector<int> &v2)
{
	return v1 ==  v2;
}


int main(int argc, char *argv[])
{
	std::vector<int> v1{1,3,5};
	std::vector<int> v2{1,3,5,7};

	std::vector<int> v3{2,3,5};
	std::vector<int> v4{2,3,5};

	if (compare_vector(v1,v2))
		std::cout << "v1 is euqal to v2" << std::endl;
	else
		std::cout << "v1 is not euqal to v2" << std::endl;

	if (compare_vector(v3,v4))
		std::cout << "v3 is euqal to v4" << std::endl;
	else
		std::cout << "v3 is not euqal to v4" << std::endl;
}


