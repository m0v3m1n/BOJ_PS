#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int x, y, p1, p2; std::cin >> x >> y >> p1 >> p2;

    while (p1 <= 10000 && p2 <= 10000)
    {
        if (p1 > p2)
            p2 += y;
        else if (p1 < p2)
            p1 += x;
        else
        {
            std::cout << p1;
            return 0;
        }
    }

    std::cout << -1;
    return 0;
}