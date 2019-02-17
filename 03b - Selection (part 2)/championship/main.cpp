#include <iostream>

int main()
{
    int c_v, c_e, c_s, f_v, f_e, f_s;
    std::cin >> c_v >> c_e >> c_s >> f_v >> f_e >> f_s;

    int c_p = 3 * c_v + c_e;
    int f_p = 3 * f_v + f_e;

    if (c_p == f_p)
    {
        if (c_s == f_s) std::cout << "=";
        else if (c_s > f_s) std::cout << "C";
        else std::cout << "F";
    }
    else if (c_p > c_v) std::cout << "C";
    else std::cout << "F";

    return 0;
}