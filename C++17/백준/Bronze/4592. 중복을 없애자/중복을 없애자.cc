#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, prev, cur;
    while (1)
    {
        std::cin >> N;
        if (!N)
            break;

        std::vector<int> V(N);
        for (int i = 0; i < N; i++)
            std::cin >> V[i];

        std::cout << V[0] << ' '
            ;
        for (int j = 1; j < N; j++)
            if (V[j] != V[j - 1])
                std::cout << V[j] << ' ';

        std::cout << "$\n";
    }
}
