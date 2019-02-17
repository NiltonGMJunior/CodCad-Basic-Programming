#include <iostream>

int main()
{
    int n, s;
    std::cin >> n >> s;

    int min = s;
    int day = 1;

    while (day <= n)
    {
        int mov;
        std::cin >> mov;
        s += mov;
        if (s < min) min = s;
        ++day;
    }

    std::cout << min;

    return 0;
}