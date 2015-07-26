#include <vector>
#include <iostream>
#include <stdlib.h>


int search(std::vector<int> &v1, int key)
{
	for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++) {
		if (*it == key) 
			return true;
	}
	return false;
}


int main(int argc, char *argv[])
{
	std::vector<int> v1;
	int key;

	if (argc != 2) {
		std::cout << "Invalid parameter" << std::endl;
		return -1;
	}

	key = atoi(argv[1]);
	std::cout << "key value:" << key << std::endl;

	//fullfill std::vector
	for (int i = 0; i < 100; i++) {
		v1.push_back(i);
	}

	//serach 
	if (search(v1,key)) {
		std::cout << "Value has been found."<<std::endl;
	} else {
		std::cout << "Value not found." << std::endl;
	}
	return 0;
}
