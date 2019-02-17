#include <iostream>

int main()
{
    while (true)
    {
        int h1, m1, h2, m2;
        std::cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;

        int minutes1 = 60 * h1 + m1;
        int minutes2 = 60 * h2 + m2;

        if (minutes2 >= minutes1) std::cout << minutes2 - minutes1;
        else std::cout << 60*24 - (minutes1 - minutes2);

        std::cout << "\n";
    }
    return 0;
}