#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::string S;
    std::vector<std::string> words;

    std::cin >> N >> S;

    if (N == 1)
    {
        int prev = 0, idx = 0;

        for (idx = 0; idx < S.length(); idx++)
            if ('A' <= S[idx] && S[idx] <= 'Z')
            {
                words.push_back(S.substr(prev, idx - prev));
                prev = idx;
            }

        words.push_back(S.substr(prev, idx - prev));
        for (int i = 1; i < words.size(); i++)
            words[i][0] += 32;
    }
    else if (N == 2)
    {
        int prev = 0, idx = 0;

        for (idx = 0; idx < S.length(); idx++)
            if (S[idx] == '_')
            {
                words.push_back(S.substr(prev, idx - prev));
                prev = idx + 1;
            }

        words.push_back(S.substr(prev, idx - prev));
    }
    else
    {
        int prev = 0, idx = 0;

        for (idx = 1; idx < S.length(); idx++)
            if ('A' <= S[idx] && S[idx] <= 'Z')
            {
                words.push_back(S.substr(prev, idx - prev));
                prev = idx;
            }

        words.push_back(S.substr(prev, idx - prev));
        for (int i = 0; i < words.size(); i++)
            words[i][0] += 32;
    }

    for (int i = 0; i < words.size(); i++)
    {
        S = words[i];

        if (i)
            S[0] -= 32;

        std::cout << S;
    } std::cout << '\n'; // #1

    for (int i = 0; i < words.size() - 1; i++)
        std::cout << words[i] << '_';
    std::cout << words[words.size() - 1] << '\n'; // #2

    for (int i = 0; i < words.size(); i++)
    {
        S = words[i];
        S[0] -= 32;
        std::cout << S;
    } // #3

    return 0;
}