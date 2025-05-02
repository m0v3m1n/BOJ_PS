#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int T, N; std::cin >> T;

    while (T--)
    {
        std::cin >> N;

        if (N == 1)
        {
            std::cout << "#\n\n";
            continue;
        }
        else if (N == 2)
        {
            std::cout << "##\n";
            std::cout << "##\n";
            std::cout << "\n\n";
            continue;
        }

        for (int i = 0; i < N; i++) std::cout << '#';
        std::cout << '\n';

        for (int i = 0; i < N - 2; i++)
        {
            std::cout << '#';
            for (int i = 0; i < N - 2; i++) std::cout << 'J';
            std::cout << '#' << '\n';
        }

        for (int i = 0; i < N; i++) std::cout << '#';
        std::cout << "\n\n";
    }

    return 0;
}
