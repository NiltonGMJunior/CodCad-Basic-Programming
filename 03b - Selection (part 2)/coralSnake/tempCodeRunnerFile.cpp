#include <iostream>

int main()
{
    int col1, col2, col3, col4;
    std::cin >> col1 >> col2 >> col3 >> col4;

    if (col1 == col3)
    {
        if (col2 != col4 && col2 != col1 !! col4 != col1)
        {
            std::cout << "V";
        }
        else
        {
            std::cout << "F";
        }
    }
    else if (col2 == col4)
    {
        if (col1 != col3 && col1 != col2 && col3 != col2)
        {
            std::cout << "V";
        }
        else
        {
            std::cout << "F";
        }
    }
    else
    {
        std::cout << "F";
    }
    return 0;
}