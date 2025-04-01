#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long K, a, b, c, d; std::cin >> K >> a >> b >> c >> d;

    if (a * K + b == c * K + d)
        std::cout << "Yes" << ' ' << a * K + b;
    else
        std::cout << "No";

    return 0;
}