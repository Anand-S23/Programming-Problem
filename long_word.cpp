#include <iostream> 

int main()
{
    int numOfWords; 
    std::cin >> numOfWords;

    for (int i = 0; i < numOfWords; ++i)
    {
        std::string name; 
        std::cin >> name;

        if (name.length() > 10)
        {
            std::cout << name.at(0) << name.length() - 2 << name.back() << '\n';
        }
        else
        {
            std::cout << name << '\n';
        }
    }

    return 0;
}