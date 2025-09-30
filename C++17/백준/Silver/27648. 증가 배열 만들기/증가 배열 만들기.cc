#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M, K; std::cin >> N >> M >> K;
    std::vector<std::vector<int>> V(N, std::vector<int>(M));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            V[i][j] = i + 1 + j;

    if (V[N - 1][M - 1] > K)
        std::cout << "NO";
    else
    {
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