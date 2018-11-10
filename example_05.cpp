#include<iostream>
#include<string>

int main()
{
    std::string name;
    std::cout << "Who are you?" <<std::endl;
    std::cin >> name;

    std::string greeting = "Hello " + name + ".";
    
    if (name == "Matic")
    {
        greeting += " I know you! You are my old friend from school.";
    }

    std::cout << greeting << std::endl;

    greeting = greeting.substr(0, 5);
    
    std::cout << greeting << std::endl;
    return 0;
}