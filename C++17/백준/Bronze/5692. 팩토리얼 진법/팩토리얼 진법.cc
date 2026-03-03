#include <iostream>

int fact(int len)
{
    int res = 1;

    for (int i = 1; i <= len; i++)
        res *= i;

    return res;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S;
    while (1)
    {
        std::cin >> S;
        if (S == "0")
            break;
        
        int sum = 0;
        for (int i = 0; i < S.length(); i++)
            sum += (S[i] - '0') * fact(S.length() - i);

        std::cout << sum << '\n';
    }
    return 0;
}