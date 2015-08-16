#include <iostream>
#include <numeric>
#include <vector>
#include <string>


int main(int argc, char *argv[])
{
	std::vector<std::string> roster1;
	std::vector<char *> roster2;
	char *str1 = "peter";
	char *str2 = "bill";
	char *str3 = "pual";
	char *str4 = "billy";

	roster1.push_back("peter");
	roster1.push_back("bill");
	roster1.push_back("pual");
	roster1.push_back("john");

	roster2.push_back(str1);
	roster2.push_back(str2);
	roster2.push_back(str3);
	roster2.push_back(str4);

	if (equal(roster1.cbegin(),roster1.cend(),roster2.cbegin()))
		std::cout << "roster1 is euqal to roster2."<<std::endl;
	else
		std::cout << "roster1 is not euqal to roster2."<<std::endl;

	return 0;
}


