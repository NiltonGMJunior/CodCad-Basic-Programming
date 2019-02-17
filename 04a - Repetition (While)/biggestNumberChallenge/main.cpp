#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    int max = num;
    while (true)
    {
        std::cin >> num;
        if (num == 0) break;
        if (num > max) max = num;
    }
    std::cout << max;
    return 0;
}