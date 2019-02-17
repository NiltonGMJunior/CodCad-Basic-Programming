#include <iostream>

int main()
{
    int gold1, silver1, bronze1;
    std::cin >> gold1 >> silver1 >> bronze1;
    
    int gold2, silver2, bronze2;
    std::cin >> gold2 >> silver2 >> bronze2;

    if (gold1 == gold2)
    {
        if (silver1 == silver2)
        {
            if (bronze1 > bronze2) std::cout << "A";
            else std::cout << "B";
        }
        else if (silver1 > silver2) std::cout << "A";
        else std::cout << "B";
    }
    else if (gold1 > gold2) std::cout << "A";
    else std::cout << "B";

    return 0;
}