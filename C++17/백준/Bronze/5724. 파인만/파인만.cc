#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, sq;

    while (1)
    {
        std::cin >> N;

        if (!N)
            break;

        sq = 0;

        for (int i = 1; i <= N; i++)
            sq += i * i;

        std::cout << sq << '\n';
    }

    return 0;
}