#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N, Q, query;
    std::cin >> N >> Q;

    std::vector<long long> V(N);
    for (auto& K : V)
        std::cin >> K;

    for (int i = 0; i < Q; i++)
    {
        std::cin >> query;

        int a, b, c, d;
        long long res = 0, tmp;

        if (query == 1)
        {
            std::cin >> a >> b;
            for (int i = a - 1; i < b; i++)
                res += V[i];

            tmp = V[a - 1];
            V[a - 1] = V[b - 1];
            V[b - 1] = tmp;
        }
        else
        {
            std::cin >> a >> b >> c >> d;
            for (int i = a - 1; i < b; i++)
                res += V[i];
            for (int i = c - 1; i < d; i++)
                res -= V[i];
        }

        std::cout << res << '\n';
    }

    return 0;
}