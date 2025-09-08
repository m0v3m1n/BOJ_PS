#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    for (int i = 1; i <= 100; i++)
        if (1 + i + i * i == N)
            std::cout << i;
}