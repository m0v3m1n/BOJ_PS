#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, sum;
    std::string S;
    
    std::cin >> N;
    while (N--)
    {
        sum = 0;

        std::cin >> S;
        std::reverse(S.begin(), S.end());

        for(int i = 0; i < S.length(); i++)
            if (i % 2) // 짝수번째면 나머지가 1임
            {
                int tmp = (S[i] - '0') * 2;
                tmp >= 10 ? S[i] = (tmp / 10 + tmp % 10) + '0' : S[i] = tmp + '0';
            }

        for (int i = 0; i < S.length(); i++)
            sum += S[i] - '0';

        if (sum % 10)
            std::cout << "F" << '\n';
        else
            std::cout << "T" << '\n';
    }

    return 0;
}