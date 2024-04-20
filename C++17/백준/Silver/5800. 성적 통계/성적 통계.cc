#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    for(int j = 1; j <= N; j++)
    {
        int heads, score_diff = 0;
        std::cin >> heads;

        std::vector<int> V(heads);
        for (int i = 0; i < heads; i++)
            std::cin >> V[i];

        std::sort(V.begin(), V.end());

        std::cout << "Class " << j << '\n';
        std::cout << "Max " << V[heads - 1] << ", Min " << V[0] << ", Largest gap ";

        for (int a = 0; a < heads - 1; a++)
            if (V[a + 1] - V[a] > score_diff) 
                score_diff = V[a + 1] - V[a];

        std::cout << score_diff << '\n';
    }

    return 0;
}