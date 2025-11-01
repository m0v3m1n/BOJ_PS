#include <iostream>
#include <algorithm>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    double l, s; std::cin >> l;
    s = l * l * std::sqrt(3) / 4;

    std::cout << std::fixed;
    std::cout.precision(9);
    std::cout << s;

    return 0;
}