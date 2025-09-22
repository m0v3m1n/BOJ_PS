#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    int res = 1;

    if (N % 2) // 홀수라면?
        N = N / 2 + 1;
    else
        N = N / 2;

    for (int i = 0; i < N; i++)
        res = (res % 16769023 * 2) % 16769023;

    std::cout << res;
    return 0;
}