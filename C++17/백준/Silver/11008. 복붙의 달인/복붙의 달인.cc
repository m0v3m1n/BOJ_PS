#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, count;
    bool flag;
    std::string S, s;

    std::cin >> N;

    while (N--)
    {
        count = 0;
        std::cin >> S >> s;

        for (int i = 0; i < S.length(); i++)
        {
            flag = true;

            if (i + s.length() <= S.length())
            {
                for (int j = 0; j < s.length(); j++)
                    if (S[i + j] != s[j])
                    {
                        flag = false;
                        count++;
                        break;
                    } // 글자 하나라도 틀리면 나가리

                if (flag)
                {
                    count++;
                    i += s.length();
                    i--;
                }
            }
            else
                count++;
        }

        std::cout << count << '\n';
    }
}