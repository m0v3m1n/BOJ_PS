#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K, count = 0, tmp; std::cin >> N >> K;

    std::vector<int> V(N);
    for (int i = 0; i < N; i++) std::cin >> V[i];

    for (int last = N - 1; last >= 1; last--)
    {
        for (int i = 0; i < last; i++)
        {
            if (V[i] > V[i + 1])
            {
                tmp = V[i];
                V[i] = V[i + 1];
                V[i + 1] = tmp;

                count++;

                if (count == K)
                    std::cout << V[i] << ' ' << V[i + 1];
            }
        }
    }

    if (count < K)
        std::cout << -1;
    return 0;
}