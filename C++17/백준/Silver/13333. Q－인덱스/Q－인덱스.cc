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
    for (int i = 0; i < N; i++)
        std::cin >> V[i];

    std::sort(V.begin(), V.end());

    int q_index_max = -1;

    for (int i = 0; i <= N; i++)
        for (int j = 0; j < N; j++)
            if (V[j] >= i && i <= N - j && N - i <= j + 1)
                q_index_max = i;

    std::cout << q_index_max;
    return 0;
}