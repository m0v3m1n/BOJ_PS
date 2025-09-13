#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    long long sum = 0;
    std::vector<long long> Seq(N);
    std::vector<long long> prefixSum(N, 0);

    for (int i = 0; i < N; i++)
    {
        std::cin >> Seq[i];

        if (!i)
            prefixSum[i] = Seq[i];
        else
            prefixSum[i] = Seq[i] + prefixSum[i - 1];
    }

    for (int i = 0; i < N; i++)
        sum += (prefixSum[N - 1] - prefixSum[i]) * Seq[i];

    std::cout << sum;
    return 0;
}