#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    std::string S;
    std::cin >> S;

    int res, stage = 0;

    if (S.length() == 1)
        std::cout << 0;
    else
    {
        do
        {
            res = 1;
            for (int i = 0; i < S.length(); i++)
                res *= S[i] - '0';

            stage++;
            S = std::to_string(res);

        } while (S.length() > 1);

        std::cout << stage;
    }

    return 0;
}