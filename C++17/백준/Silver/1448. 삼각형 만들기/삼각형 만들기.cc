#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> V(N);

    for (auto& K : V)
        std::cin >> K;

    std::sort(V.begin(), V.end(), std::greater<int>());
    
    for(int i = 0; i < N - 2; i++)
        if (V[i] < V[i + 1] + V[i + 2])
        {
            std::cout << V[i] + V[i + 1] + V[i + 2];
            return 0;
        }

    std::cout << -1;
    return 0;
}