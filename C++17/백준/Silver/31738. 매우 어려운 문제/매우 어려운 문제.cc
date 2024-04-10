#include <iostream>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long N, M, result = 1;
    std::cin >> N >> M;

    // (A * B) % p = ((A % p) * (B % p)) % p
    // N! % p = (N * (N-1) * (N-2) * ... * 1) % p
    // ==> ((N % p) * (N-1 % p) * ... * (1 % p)) % p
    if (N < M) // M이 더 크면 최대 1000만번 ==> 쌉가능
    {
        for (int i = 1; i <= N; i++)
        {
            result *= i;
            result %= M;
        }
        std::cout << result;
    }
    else
        std::cout << 0;
    return 0;
}