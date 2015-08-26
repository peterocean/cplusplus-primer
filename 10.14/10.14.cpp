#include <vector>
#include <iostream>


int main(int argc, char *argv[])
{
	int a1 = 5;
	int a2 = 10;

	auto f =  [](int var1, int var2) {return var1+var2;}; 
	std::cout << "f()=" << f(a1,a2) << std::endl;
}
