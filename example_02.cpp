#include<iostream>

int main()
{
	uint32_t localVariableA = 10;
	uint32_t localVariableB = 20;
	uint32_t localVariableC = localVariableA + localVariableB;

	float localFloatVariable = 3.4f;
	float localDevideResult = 9.0/4.0;
	auto localString = "Hello World";
	auto secondLocalString = "Hello World!";

	std::cout << "Suma is: " << localVariableC << std::endl;
	std::cout << "Local float variable: " << localFloatVariable << std::endl;
	std::cout << "Casting float in int: " << (int)localFloatVariable << std::endl;
	std::cout << "Devide result: " << localDevideResult << std::endl;
	std::cout << "Special string print: " << localString << std::endl;
	std::cout << "Special second string print: " << secondLocalString << std::endl;
	return 0;
}