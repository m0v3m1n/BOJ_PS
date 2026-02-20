#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T, N, tmp, sum = 0;
    std::cin >> T >> N;

    while (N--)
    {
        std::cin >> tmp;
        sum += tmp;
    }

    if (sum >= T)
        std::cout << "Padaeng_i Happy";
    else
        std::cout << "Padaeng_i Cry";

    return 0;
}