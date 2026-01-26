#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cout << (i * 2) + 1 << ' ';

    return 0;
}