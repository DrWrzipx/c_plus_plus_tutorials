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


	return 0;
}