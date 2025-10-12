#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K, inc = 0; std::cin >> N >> K;
    std::vector<int> V(N);
    for (auto& K : V)
        std::cin >> K;

    if (N == 1)
        std::cout << 0;
    else
    {
        for (int i = 1; i < N; i++)
            if (V[i - 1] >= V[i])
            {
                V[i] += K;
                inc++;

                if (V[i - 1] >= V[i])
                {
                    std::cout << -1;
                    return 0;
                }
            }

        std::cout << inc;
    }

    return 0;
}