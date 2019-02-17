#include <iostream>

int main()
{
    int playerA, playerB, playerC;
    std::cin >> playerA >> playerB >> playerC;

    if ((playerA == 1 && playerB == 0 && playerC == 0) || (playerA == 0 && playerB == 1 && playerC == 1)) std::cout << "A";
    else if ((playerA == 0 && playerB == 1 && playerC == 0) || (playerA == 1 && playerB == 0 && playerC == 1)) std::cout << "B";
    else if ((playerA == 0 && playerB == 0 && playerC == 1) || (playerA == 1 && playerB == 1 && playerC == 0)) std::cout << "C";
    else std::cout << "*";
    return 0;
}