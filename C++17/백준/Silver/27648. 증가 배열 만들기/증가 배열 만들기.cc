#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M, K; std::cin >> N >> M >> K;
    std::vector<std::vector<int>> V(N, std::vector<int>(M));

    if(K < N + M - 1)
        std::cout << "NO";
    else
    {
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                V[i][j] = i + 1 + j;
        std::cout << "YES" << '\n';

        for (auto& K : V)
        {
            for (auto& L : K)
                std::cout << L << ' ';
            std::cout << '\n';
        }
    }

    return 0;
}