#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::string S;

    while (1)
    {
        std::cin >> N;
        if (!N)
            break;

        while (1)
        {
            S = std::to_string(N);

            if (S.length() == 1)
                break;

            N = 0;

            for (int i = 0; i < S.length(); i++)
                N += (S[i] - '0');
        }

        std::cout << S << '\n';
    }
    return 0;
}
