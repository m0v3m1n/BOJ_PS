#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, sum = 0; std::cin >> N;
    std::vector<int> V(N);

    for (auto& K : V)
        std::cin >> K;
    std::sort(V.begin(), V.end());

    for (int i = 1; i < N; i++)
        sum += V[i] - V[i - 1];
    sum += V[N - 1] - V[0];

    std::cout << sum;
    return 0;
}