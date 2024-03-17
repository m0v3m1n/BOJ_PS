#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int N; std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < N - 1; j++)
                std::cout << ' ';
            std::cout << '*';
        }

        else if (i == N - 1)
            for (int j = 0; j < (2 * N) - 1; j++)
                std::cout << '*';

        else
        {
            for (int j = i; j < N - 1; j++)
                std::cout << ' ';
            std::cout << '*';
            for (int j = 0; j < (2 * i) - 1; j++)
                std::cout << ' ';
            std::cout << '*';
        }
        std::cout << '\n';
    }
    return 0;
}