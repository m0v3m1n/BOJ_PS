#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long DP[81];
    DP[0] = 0; DP[1] = 1;
    for (int i = 2; i <= 80; i++)
        DP[i] = DP[i - 1] + DP[i - 2];

    long long DDPP[81];
    DDPP[0] = 0;  DDPP[1] = 4;
    for (int i = 2; i <= 80; i++)
        DDPP[i] = DDPP[i - 1] + DP[i] * 2;

    int N;
    std::cin >> N;

    std::cout << DDPP[N];

    return 0;
}