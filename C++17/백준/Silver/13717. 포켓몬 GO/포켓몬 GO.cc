#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, idx = 0, sum = 0;; std::cin >> N;
    std::vector<std::pair<std::string, std::pair<int, int>>> V(N);
    std::vector<int> evolve(N, 0);

    for (auto& K : V)
        std::cin >> K.first >> K.second.first >> K.second.second;

    for (int i = 0; i < N; i++)
    {
        while (V[i].second.first <= V[i].second.second)
        {
            V[i].second.second -= V[i].second.first;
            V[i].second.second += 2;
            evolve[i]++;
        }

        sum += evolve[i];
    }

    for (int i = 0; i < N; i++)
        if (evolve[i] > evolve[idx])
            idx = i;

    std::cout << sum << '\n' << V[idx].first;
    return 0;
}