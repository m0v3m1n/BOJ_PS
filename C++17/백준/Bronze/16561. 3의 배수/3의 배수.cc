#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, total = 0; std::cin >> N;
    N /= 3;
    N -= 2;

    for (int i = 1; i <= N; i++)
        total += i;

    std::cout << total;
}
