#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T; std::cin >> T;
    while (T--)
    {
        long long K;
        std::cin >> K;
        std::cout << 23 * K << '\n';
    }

    return 0;
}