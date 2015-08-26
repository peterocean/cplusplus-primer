#include <vector>
#include <iostream>


int main(int argc, char *argv[])
{
	int a1 = 5;
	int a2 = 10;

	auto f =  [a1](int var) {return a1+var;}; 
	std::cout << "[]f()=" << f(a2) << std::endl;
}
