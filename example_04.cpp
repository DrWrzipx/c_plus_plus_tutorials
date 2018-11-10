#include<iostream>

double add(double x, double y)
{
    double result = x + y;
    return result;
}

double add(double x, double y, double z)
{
    double result = x + y + z;
    return result;
    // return add(add(x,y) z);
}

void nothingReturn(void)
{
    std::cout << "This is function only for print SOMETHING on screen." << std::endl;
}

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