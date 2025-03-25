#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    double A, B, M;
    std::cin >> A >> B;

    M = (B - A) / 400;
    std::cout << 1 / (1 + std::pow(10, M));

    return 0;
}