#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int> vi;
    for(int i = 0; i<10; ++i)
    {
        vi.push_back(i);
    }

    for(auto item:vi)
    {
        std::cout << item << "|";
    }

    std::cout << std::endl;


    std::vector<std::string> vectorOfStrings;

    for(int i = 0; i < 4; i++)
    {
        std::string word;
        std::cin >> word;
        vectorOfStrings.push_back(word);
    }

    for(auto word:vectorOfStrings)
    {
        std::cout << word << "||";
    }
    std::cout << std::endl;
    for(std::vector<std::string>::iterator i = vectorOfStrings.begin(); i != vectorOfStrings.end(); ++i)
    {
        std::cout << *i << "|||";
    }

    std::cout << std::endl;

    std::sort(vectorOfStrings.begin(), vectorOfStrings.end());


    for(std::vector<std::string>::iterator i = vectorOfStrings.begin(); i != vectorOfStrings.end(); ++i)
    {
        std::cout << *i << "|||";
    }

    std::cout << std::endl;
    std::cout << "Last vector with words is: " << vectorOfStrings.size() << std::endl;
    vectorOfStrings.pop_back();
    std::cout << "Last vector with words is: " << vectorOfStrings.size() << std::endl;
}