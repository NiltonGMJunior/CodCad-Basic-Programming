#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;

    int minX = 0;
    int maxX = 432;
    int minY = 0;
    int maxY = 468;

    if (x < minX || x > maxX || y < minY || y > maxY) std::cout << "fora";
    else std::cout << "dentro";

    return 0;
}