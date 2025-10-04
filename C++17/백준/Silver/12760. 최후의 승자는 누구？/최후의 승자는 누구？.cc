#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M; std::cin >> N >> M;
    std::vector<int> score(N, 0);
    std::vector<std::vector<int>> card(N, std::vector<int>(M));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            std::cin >> card[i][j];
        std::sort(card[i].begin(), card[i].end(), std::greater<int>());
    }

    for (int i = 0; i < M; i++)
    {
        int max = 0;

        for (int j = 0; j < N; j++)
            if (card[j][i] > max)
                max = card[j][i];

        for (int j = 0; j < N; j++)
            if (card[j][i] == max)
                score[j]++;
    }

    int max = 0;

    for (int i = 0; i < N; i++)
        if (score[i] > max)
            max = score[i];

    for (int i = 0; i < N; i++)
        if (score[i] == max)
            std::cout << i + 1 << ' ';

    return 0;
}