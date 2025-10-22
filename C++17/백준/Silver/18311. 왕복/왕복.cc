#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long N, K; std::cin >> N >> K;
    std::vector<long long> V(N);
    std::vector<std::pair<long long, int>> prefixSum;

    for (auto& K : V)
        std::cin >> K;

    prefixSum.push_back({ 0, 1 });
    for (long long i = 0; i < N; i++)
        if (i == N - 1)
            prefixSum.push_back({ V[i] + prefixSum[i].first, prefixSum[i].second });
        else
            prefixSum.push_back({ V[i] + prefixSum[i].first, prefixSum[i].second + 1 });

    for (long long i = 0; i < N; i++)
        prefixSum.push_back({ V[N - i - 1] + prefixSum[N + i].first, prefixSum[N + i].second - 1});

    for(long long i = 0; i < 2 * N; i++)
        if (K < prefixSum[i].first)
        {
            if(i > N)
                std::cout << prefixSum[i].second + 1;
            else
                std::cout << prefixSum[i].second - 1;
            break;
        }

    if (K >= prefixSum[2 * N - 1].first)
        std::cout << 1;
    

    return 0;
}