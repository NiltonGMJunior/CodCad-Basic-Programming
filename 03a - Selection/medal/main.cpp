#include <iostream>

int main()
{
    int time1, time2, time3;
    std::cin >> time1 >> time2 >> time3;

    if (time1 < time2)
    {
        if (time1 < time3)
        {
            std::cout << "1\n";
            if (time2 < time3)
            {
                std::cout << "2\n";
                std::cout << "3";
            }
            else
            {
                std::cout << "3\n";
                std::cout << "2";
            }
        }
        else
        {
            std::cout << "3\n";
            std::cout << "1\n";
            std::cout << "2";
        }
    }
    else
    {
        if (time2 < time3)
        {
            std::cout << "2\n";
            if (time1 < time3)
            {
                std::cout << "1\n";
                std::cout << "3";
            }
            else
            {
                std::cout << "3\n";
                std::cout << "1";
            }
        }
        else
        {
            std::cout << "3\n";
            std::cout << "2\n";
            std::cout << "1";
        }
    }
    return 0;
}