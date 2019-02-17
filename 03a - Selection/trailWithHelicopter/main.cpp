#include <iostream>

int main()
{
    int hPos, pPos, fPos;
    int dir; // -1 for clockwise movement and 1 for counter-clockwise movement

    std::cin >> hPos >> pPos >> fPos >> dir;

    int distHel = fPos - hPos;
    int distPol = fPos - pPos;

    if (dir == -1) // moving clockwise
    {
        if (distHel > 0)
        {
            if (distPol > 0) 
            {
                if (distPol > distHel) std::cout << "S";
                else std::cout << "N";
            }
            else
            {
                std::cout << "S";
            }
        }
        else
        {
            if (distPol > 0)
            {
                std::cout << "N";
            }
            else
            {
                if (distPol < distHel) std::cout << "N";
                else std::cout << "S";
            }
        }
    }
    else // moving counter-clockwise
    {
        if (distHel > 0)
        {
            if (distPol > 0) 
            {
                if (distPol > distHel) std::cout << "N";
                else std::cout << "S";
            }
            else
            {
                std::cout << "N";
            }
        }
        else
        {
            if (distPol > 0)
            {
                std::cout << "S";
            }
            else
            {
                if (distPol < distHel) std::cout << "S";
                else std::cout << "N";
            }
        }
    }
    return 0;
}