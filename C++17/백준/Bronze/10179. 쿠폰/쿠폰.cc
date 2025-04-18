#include <iostream>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    while (N--)
    {
        double d; std::cin >> d; // 60.00
        d *= 0.8; // 48.00
        d *= 100; // 4800
        d + 0.5; d = std::floor(d); // 4800.5 --> 4800
        d /= 100.0; // 48.00

        std::cout << std::fixed;
        std::cout.precision(2);
        std::cout << "$" << d << '\n';
    }
    return 0;
}
