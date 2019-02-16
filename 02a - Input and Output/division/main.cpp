#include <iostream>

int main()
{
    double num1, num2;
    std::cin >> num1;
    std::cin >> num2;

    printf("%.2lf", num1 / num2);
    return 0;
}