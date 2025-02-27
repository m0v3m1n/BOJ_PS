#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M, r, g, b, I; std::cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin >> r >> g >> b;
            I = (r * 2126 + g * 7152 + b * 722);

            if (I < 510000)
                std::cout << '#';
            else if (I < 1020000)
                std::cout << 'o';
            else if (I < 1530000)
                std::cout << '+';
            else if (I < 2040000)
                std::cout << '-';
            else
                std::cout << '.';
        }
        std::cout << '\n';
    }

    return 0;
}