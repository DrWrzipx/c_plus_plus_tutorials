#include "functions04.h"

int main()
{
    double firstNumber = 0;
    double secondNumber = 0;
    double result = 0;
    nothingReturn();
    std::cout << "Please enter first number" << std::endl;
    std::cin >> firstNumber;
    std::cout << "Please enter second number" << std::endl;
    std::cin >> secondNumber;
    result = add(firstNumber, secondNumber);

    std::cout << "Result is: " << result << std::endl;

    return 0;
}