#include <iostream>

int main()
{
    double pedroTime, pauloTime;
    std::cin >> pedroTime >> pauloTime;
    if (pedroTime <= pauloTime) std::cout << "Pedro";
    else std::cout << "Paulo";
    return 0;
}