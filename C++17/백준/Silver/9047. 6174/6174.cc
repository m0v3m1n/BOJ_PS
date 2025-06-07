#include <iostream>
#include <string>
#include <algorithm>

int cal(std::string S)
{
    while (S.length() < 4)
        S.insert(S.begin(), '0');

    std::string original;
    int min, max;

    for(int i = 0; i < 3; i++)
        for(int j = i + 1; j < 4; j++)
            if (S[i] > S[j])
            {
                char tmp = S[i];
                S[i] = S[j];
                S[j] = tmp;
            }
    original = S; std::reverse(S.begin(), S.end());

    min = std::stoi(original);
    max = std::stoi(S);
    return (max - min);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, count, tmp;
    std::string S;
    
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> S;
        count = 0;

        if (S == "6174")
            std::cout << 0 << '\n';
        else
        {
            while (S != "6174")
            {
                tmp = cal(S);
                count++;
                S = std::to_string(tmp);
            }
            std::cout << count << '\n';
        }
    }
    return 0;
}