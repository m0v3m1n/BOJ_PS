#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int o;
    std::string S;

    while (1)
    {
        std::cin >> S;
        if (S == "#")
            break;

        o = 0;
        for (int i = 0; i < S.length(); i++)
            if (S[i] == '0')
                continue;
            else if (S[i] == '1')
                o++;
            else if (S[i] == 'o')
                if (o % 2) // 1이 홀수개면
                    std::cout << S.substr(0, S.length() - 1) << '0' << '\n';
                else
                    std::cout << S.substr(0, S.length() - 1) << '1' << '\n';
            else // e
                if(o % 2) // 1이 홀수개면
                    std::cout << S.substr(0, S.length() - 1) << '1' << '\n';
                else
                    std::cout << S.substr(0, S.length() - 1) << '0' << '\n';

    }
    return 0;
}