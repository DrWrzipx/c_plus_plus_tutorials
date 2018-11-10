#include<iostream>
#include<string>

int main()
{
    bool endOfShow = true;
    std::string firstWord  = " ";
    std::string secondWord = " ";
    char answer = ' ';    
    while(endOfShow)
    {
        std::cout << "Please insert first word." << std::endl;
        std::cin >> firstWord;
        std::cout << "Please insert second word." << std::endl;
        std::cin >> secondWord;

        if(firstWord.length() > secondWord.length())
        {
            std::cout << "First word is greeater then second." << std::endl;
        }

        else if(secondWord.length() > firstWord.length())
        {
            std::cout << "Second word is greeater then first." << std::endl;
        }

        else
        {
            std::cout << "Words are equal length." << std::endl;
        }


        std::cout << "Do you like compare again ? (Y = YES, N = NO)" << std::endl;
        std::cin>>answer;

        if(answer != 'Y'){
            endOfShow = false;
        }
    }

    return 0;
}