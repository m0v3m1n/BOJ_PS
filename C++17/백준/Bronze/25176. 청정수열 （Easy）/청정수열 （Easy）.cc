#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, fact = 1;
    std::cin >> N;

    for (int i = 1; i <= N; i++)
        fact *= i;

    std::cout << fact;
    return 0;
}
