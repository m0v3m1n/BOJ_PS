#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M; std::cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        std::cin >> N;

        std::vector<int> V(N);
        for (int j = 0; j < N; j++)
            std::cin >> V[j];

        for(int k = V.size() - 1; k > 0; k--)
            if (V[k] > V[k - 1])
            {
                std::cout << "No";
                return 0;
            }
    }

    std::cout << "Yes";
    return 0;
}
