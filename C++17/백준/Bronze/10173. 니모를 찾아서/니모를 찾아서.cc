#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S;

    while (1)
    {
        bool flag = false;
        std::getline(std::cin, S);

        if (S == "EOI")
            break;
        
        for (int i = 0; i < S.size() - 3; i++)
            if (
                (S[i] == 'N' || S[i] == 'n')
                && (S[i + 1] == 'E' || S[i + 1] == 'e')
                && (S[i + 2] == 'M' || S[i + 2] == 'm')
                && (S[i + 3] == 'O' || S[i + 3] == 'o')
                )
            {
                std::cout << "Found" << '\n';
                flag = true;
                break;
            }

        if (flag)
            continue;
        else
            std::cout << "Missing" << '\n';
    }
}