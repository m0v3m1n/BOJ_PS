#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N;
    bool flag = true;
    std::string S;

    std::cin >> N;
    std::cin.ignore();

    while (N--)
    {
        std::getline(std::cin, S);
        for (int i = 0; i < S.length() / 2; i++)
            if ('A' <= S[i] && S[i] <= 'Z')
                if (S[i] == S[S.length() - i - 1] || S[i] + ('a' - 'A') == S[S.length() - i - 1])
                    continue;
                else
                    flag = false;
            else if ('a' <= S[i] && S[i] <= 'z')
                if (S[i] == S[S.length() - i - 1] || S[i] - ('a' - 'A') == S[S.length() - i - 1])
                    continue;
                else
                    flag = false;
            else
                if (S[i] == S[S.length() - i - 1])
                    continue;
                else
                    flag = false;

        if (flag)
            std::cout << "Yes" << '\n';
        else
            std::cout << "No" << '\n';

        flag = true;
    }
}
