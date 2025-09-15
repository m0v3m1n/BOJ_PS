#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    for (int a = 2; a <= 100; a++)
        for (int b = 2; b < a; b++)
            for (int c = b; c < a; c++)
                for (int d = c; d < a; d++)
                    if (std::pow(a, 3) == std::pow(b, 3) + std::pow(c, 3) + std::pow(d, 3))
                        std::cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")" << '\n';
    return 0;
}