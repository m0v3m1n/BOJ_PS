#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int alp['z' - 'a' + 1];
    bool flag = true;
    std::string S;

    while (1)
    {
        std::fill(alp, alp + 26, 0);
        std::getline(std::cin, S);

        if (S == "*")
            break;

        flag = true;

        for (int i = 0; i < S.length(); i++)
            if (S[i] == ' ')
                continue;
            else
                alp[S[i] - 'a']++;

        for (int i = 0; i < 'z' - 'a' + 1; i++)
            if (alp[i] < 1)
            {
                std::cout << "N" << '\n';
                flag = false;
                break;
            }

        if (flag)
            std::cout << "Y" << '\n';
    }

    return 0;
}
