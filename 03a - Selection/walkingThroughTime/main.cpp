#include <iostream>

int main()
{
    int cred1, cred2, cred3;
    std::cin >> cred1 >> cred2 >> cred3;

    // Using only ONE trip it is not possible to come back to the present, since credits are greater than 0

    // Using TWO trips, we need to check if there are any duplicate number fo credits
    if (cred1 == cred2 || cred1 == cred3 || cred2 == cred3) std::cout << "S";
    // Using THREE trips, we need to check if one trip is equal to the combination of the other two
    else if (cred1 == cred2 + cred3 || cred1 == cred2 - cred3 || cred1 == cred3 - cred2) std::cout << "S";
    else if (cred2 == cred1 + cred3 || cred2 == cred1 - cred3 || cred2 == cred3 - cred1) std::cout << "S";
    else if (cred3 == cred1 + cred2 || cred3 == cred1 - cred2 || cred3 == cred2 - cred1) std::cout << "S";
    else std::cout << "N";
    return 0;
}