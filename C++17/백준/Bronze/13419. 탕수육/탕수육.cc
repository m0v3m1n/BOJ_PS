#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    while (N--)
    {
        std::string S, a, b;
        std::cin >> S;

        if (S.length() == 1)
            std::cout << S << '\n' << S << '\n';
        else if (S.length() == 2)
            std::cout << S[0] << '\n' << S[1] << '\n';
        else
        {
            if (S.length() % 2) // 홀수라면
            {
                for (int i = 0; i < S.length(); i += 2)
                    std::cout << S[i];
                for (int i = 1; i < S.length(); i += 2)
                    std::cout << S[i];
                std::cout << '\n';

                for (int i = 1; i < S.length(); i += 2)
                    std::cout << S[i];
                for (int i = 0; i < S.length(); i += 2)
                    std::cout << S[i];
                std::cout << '\n';
            }
            else
            {
                for (int i = 0; i < S.length(); i += 2)
                    std::cout << S[i];
                std::cout << '\n';

                for (int i = 1; i < S.length(); i += 2)
                    std::cout << S[i];
                std::cout << '\n';
            }
        }
    }

    return 0;
}