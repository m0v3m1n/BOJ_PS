#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long R, C, N;
    std::cin >> R >> C >> N;
    std::cout << (R % N ? R / N + 1 : R / N) * (C % N ? C / N + 1 : C / N);

    return 0;
}