#include <iostream>

int main()
{
	std::cout << "Hello World!" << std::endl;
	
	float i = 4.9;
	std::cout << "Value of i like float: "<< i << std::endl;
	std::cout << "Value of i after casting in int: " << static_cast<int>(i) << std::endl;

	return 0;
}
