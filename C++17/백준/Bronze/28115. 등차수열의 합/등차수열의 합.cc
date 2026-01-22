#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool flag = true;
    long long N, diff;
    std::cin >> N;

    std::vector<long long> V(N);
    for (auto& K : V)
        std::cin >> K;

    if (N <= 2)
    {
        std::cout << "YES" << '\n';
        for (auto& K : V)
            std::cout << K << ' ';
        std::cout << '\n';
        for (int i = 0; i < N; i++)
            std::cout << 0 << ' ';
    }
    else // N이 3 이상 --> 등차가 일정한지 확인
    {
        diff = V[1] - V[0];
        for (int i = 1; i < N; i++)
            if (V[i] - V[i - 1] != diff)
                flag = false;

        if (flag) // 등차가 일정하다면
        {
            std::cout << "YES" << '\n';
            for (auto& K : V)
                std::cout << K << ' ';
            std::cout << '\n';
            for (int i = 0; i < N; i++)
                std::cout << 0 << ' ';
        }
        else
            std::cout << "NO" << '\n';
    }

    return 0;
}