#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int cnt = 0, len;
    char tmp;
    std::string S;
    std::cin >> S;

    for (int i = 0; i < S.length() - 2; i++)
    {
        if (S[i] <= '7')
        {
            len = 1;
            tmp = S[i];

            for (int j = i + 1; j < S.length(); j++)
                if (S[j] == tmp + 1)
                {
                    len++;
                    tmp = S[j];
                }
                else
                    break;

            if (len == 3)
                cnt++;

            i += len - 1;
        }
    }

    std::cout << cnt;
    return 0;
}