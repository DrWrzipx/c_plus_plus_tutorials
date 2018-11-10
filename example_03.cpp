#include<iostream>

void checkGreaterNumber(int firstNumber, int secondNumber)
{
    if(firstNumber > secondNumber)
    {
        std::cout << "First number " << firstNumber << " is greater than second number " << secondNumber << "." << std::endl;
    }
    else if(secondNumber > firstNumber)
    {
        std::cout << "Second number " << secondNumber << " is greater than first number " << firstNumber << "." << std::endl;
    }
    else
    {
        std::cout << "First number " << firstNumber << " and second number " << secondNumber << " are equal." << std::endl;
    }
}

int main()
{
    int firstNumber = 0;
    int secondNumber = 0;
    bool keepGoing = true;
    char answer = 'Y';

    for(int loop = 0; loop < 10; ++loop)
    {
        std::cout << "++++++++++";
        for(int innerloop = 0; innerloop < 5; ++innerloop) 
        {
            ++loop;
            std::cout << "**********";
        }
    }
    
    while(keepGoing) 
    {
        std::cout << "Enter first number." << std::endl;
        std::cin >> firstNumber;
    
        std::cout << "Enter secod number." << std::endl;
        std::cin >> secondNumber;

        checkGreaterNumber(firstNumber, secondNumber);

        std::cout << "Compare antoher ? Y for Yes N for No: " << std::endl;
        std::cin >> answer;
        if(answer == 'N')
        {
            keepGoing = false;
        }
        else if(answer == 'Y')
        {
            keepGoing = true;
        }
        else
        {
            std::cout << "Please insert correct character!" << std::endl;
            std::cin >> answer;
        }
    }
}