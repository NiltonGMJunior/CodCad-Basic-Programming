#include <iostream>

int main()
{
    int n, p;
    std::cin >> n >> p;

    int query = 1;
    int count = 0;

    while (query <= n)
    {
        int p1, p2;
        std::cin >> p1 >> p2;
        if (p1 + p2 >= p) ++count;
        ++query;
    }

    std::cout << count;

    return 0;
}