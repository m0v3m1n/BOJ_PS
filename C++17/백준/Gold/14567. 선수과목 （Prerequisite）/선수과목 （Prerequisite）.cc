#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M; std::cin >> N >> M;
    std::vector<int> least(N + 1, 1);
    std::vector<std::vector<int>> V(N + 1);

    for (int i = 0; i < M; i++)
    {
        int from, to;
        std::cin >> from >> to;

        V[from].push_back(to);
    }

    for (int i = 1; i <= N; i++)
        for (int j = 0; j < V[i].size(); j++)
            least[V[i][j]] = std::max(least[V[i][j]], least[i] + 1);

    for (int i = 1; i <= N; i++)
        std::cout << least[i] << ' ';

    return 0;
}
