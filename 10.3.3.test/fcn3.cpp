#include <iostream>

int main(int argc, char *argv[])
{
	size_t v1 =42;
	
	auto  f = [v1] () mutable {return ++v1;};

	v1 = 0;
	auto j = f();
	std::cout << "j=" <<j << "  v1=" << v1 << std::endl;
}
