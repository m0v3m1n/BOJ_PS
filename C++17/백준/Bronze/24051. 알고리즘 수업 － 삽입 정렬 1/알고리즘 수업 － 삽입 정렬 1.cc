#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K, cnt = 0;
    std::cin >> N >> K;

    std::vector<int> V(N);
    for (auto& K : V)
        std::cin >> K;

    for (int i = 1; i < N; i++)
    {
        int loc = i - 1;
        int newItem = V[i];

        while (loc >= 0 && newItem < V[loc])
        {
            V[loc + 1] = V[loc];
            loc--;
            cnt++;

            if (cnt == K)
                std::cout << V[loc + 1];
        }

        if (loc + 1 != i)
        {
            V[loc + 1] = newItem;
            cnt++;

            if (cnt == K)
                std::cout << V[loc + 1];
        }
    }

    if (K > cnt)
        std::cout << -1;
    return 0;
}