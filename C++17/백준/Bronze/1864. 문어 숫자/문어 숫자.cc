#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S;

    while (1)
    {
        std::cin >> S;

        int sum = 0;
        int he_u_ung = 1;

        if (S == "#")
            break;
        else
            for (int i = S.size() - 1; i >= 0; i--)
            {
                if (S[i] == '-')
                    sum += 0;
                else if (S[i] == '\\')
                    sum += (1 * he_u_ung);
                else if (S[i] == '(')
                    sum += (2 * he_u_ung);
                else if (S[i] == '@')
                    sum += (3 * he_u_ung);
                else if (S[i] == '?')
                    sum += (4 * he_u_ung);
                else if (S[i] == '>')
                    sum += (5 * he_u_ung);
                else if (S[i] == '&')
                    sum += (6 * he_u_ung);
                else if (S[i] == '%')
                    sum += (7 * he_u_ung);
                else if (S[i] == '/')
                    sum += (-1 * he_u_ung);
                he_u_ung *= 8;
            }
        std::cout << sum << '\n';
    }
    return 0;
}