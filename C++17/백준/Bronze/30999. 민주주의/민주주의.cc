#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M, cnt = 0;
    std::cin >> N >> M;

    while (N--)
    {
        int O = 0;
        std::string S;

        std::cin >> S;
        for (auto& K : S)
            if (K == 'O')
                O++;

        if (O >= M / 2 + 1)
            cnt++;
    }

    std::cout << cnt;
    return 0;
}