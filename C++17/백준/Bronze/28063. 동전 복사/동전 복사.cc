#include <iostream>

int main()
{
    int N, x, y;
    std::cin >> N >> x >> y;

    if (N == 1)
        std::cout << 0;
    else if (N == 2)
        std::cout << 2;
    else // N >= 3
    {
        if (x == 1 || x == N)
            if (y == 1 || y == N)
                std::cout << 2;
            else
                std::cout << 3;
        else
            if (y == 1 || y == N)
                std::cout << 3;
            else
                std::cout << 4;
    }
}