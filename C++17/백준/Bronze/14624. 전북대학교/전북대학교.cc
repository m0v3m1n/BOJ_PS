#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    if (N % 2)
    {
        for (int i = 0; i < N; i++)
            std::cout << '*';
        std::cout << '\n';

        for(int i = 0; i < N / 2 + 1; i++)
            if (i == 0)
            {
                for (int j = 0; j < N / 2; j++)
                    std::cout << ' ';

                std::cout << "*" << '\n';
            }
            else
            {
                for (int j = 0; j < N / 2 - i; j++)
                    std::cout << ' ';

                std::cout << '*';

                for (int j = 0; j < i * 2 - 1; j++)
                    std::cout << ' ';

                std::cout << '*' << '\n';
            }
    }
    else
        std::cout << "I LOVE CBNU";

    return 0;
}