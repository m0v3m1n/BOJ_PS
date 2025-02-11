#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a[53] = { 0 };
    int s[53] = { 0 };

    int N, tmp;
    std::string S;

    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        a[tmp]++;
    }

    std::cin.ignore();
    std::getline(std::cin, S);
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == ' ')
            s[0]++;
        else if ('A' <= S[i] && S[i] <= 'Z')
            s[1 + S[i] - 'A']++;
        else  // 소문자
            s[27 + S[i] - 'a']++;
    }

    for (int i = 0; i < 53; i++)
    {
        if (a[i] != s[i])
        {
            std::cout << 'n';
            return 0;
        }
    }

    std::cout << 'y';
    return 0;
}
