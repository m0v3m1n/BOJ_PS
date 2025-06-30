#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M, total = 0; std::cin >> N >> M;

    std::vector<int> V(M);
    for (int i = 0; i < M; i++)
        std::cin >> V[i];

    std::sort(V.begin(), V.end());

    int idx = 0;
    while (idx < M)
    {
        if (N < 200)
        {
            N += V[idx];
            total++;
        }
        else
            break;
        idx++;
    }

    std::cout << total;
    return 0;
}