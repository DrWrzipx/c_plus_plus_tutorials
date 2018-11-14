#include <iostream>


int main()
{
	int i1 = 1;
	std::cout << "i1 = " << i1 << std::endl;

	int i2; 
	i2 = 1;
	std::cout << "i1 = " << i2 << std::endl;

	int i3(3);
	std::cout << "i1 = " << i3 << std::endl;
	
	int i4{4}
	std::cout << "i1 = " << i1 << std::endl;


	auto a1 = bool;
	auto a2 = 234;
	auto a3 = "Hello";
	auto a4 = 3.45;

	std::cout << "a1 = " << a1 << std::endl;
	std::cout << "a2 = " << a2 << std::endl;
	std::cout << "a3 = " << a3 << std::endl;
	std::cout << "a4 = " << a4 << std::endl;

	return 0;
}