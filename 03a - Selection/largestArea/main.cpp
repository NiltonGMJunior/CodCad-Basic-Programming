#include <iostream>

int main()
{
    int w1, h1, w2, h2;
    std::cin >> w1 >> h1 >> w2 >> h2;
    
    if (w1 * h1 == w2 * h2) std::cout << "Empate";
    else if (w1 * h1 > w2 * h2) std::cout << "Primeiro";
    else std::cout << "Segundo";

    return 0;
}