#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool flag = false;
    int N, M, sum = 0; std::cin >> N >> M;

    std::vector<int> V(M);
    for (int i = 0; i < M; i++)
        std::cin >> V[i];

    for (int i = 1; i <= N; i++)
    {
        flag = false;

        for (auto& K : V)
            if (i % K == 0)
            {
                flag = true;
                break;  
            }

        if (flag)
            sum += i;
    }

    std::cout << sum;
    return 0;
}
