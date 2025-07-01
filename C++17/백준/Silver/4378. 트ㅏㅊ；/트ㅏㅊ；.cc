#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char alp['z' - 'a' + 1];
    alp[0] = ' '; alp[1] = 'V'; alp[2] = 'X'; alp[3] = 'S'; alp[4] = 'W'; alp[5] = 'D'; // ABCEDF
    alp[6] = 'F'; alp[7] = 'G'; alp[8] = 'U'; alp[9] = 'H'; alp[10] = 'J'; alp[11] = 'K'; // GHIJKL
    alp[12] = 'N', alp[13] = 'B'; alp[14] = 'I'; alp[15] = 'O'; alp[16] = ' '; alp[17] = 'E'; // MNOPQR
    alp[18] = 'A'; alp[19] = 'R', alp[20] = 'Y'; alp[21] = 'C'; alp[22] = 'Q'; alp[23] = 'Z'; // STUVWX
    alp[24] = 'T'; alp[25] = ' '; // YZ

    char nums[10] = { '9', '`', '1', '2', '3', '4', '5', '6', '7', '8'};
    std::string S;

    while (std::getline(std::cin, S))
    {
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == '-')
                std::cout << '0';
            else if (S[i] == '=')
                std::cout << '-';

            else if (S[i] == '[')
                std::cout << 'P';
            else if (S[i] == ']')
                std::cout << '[';
            else if (S[i] == '\\')
                std::cout << ']';

            else if (S[i] == ';')
                std::cout << 'L';
            else if (S[i] == '\'')
                std::cout << ';';

            else if (S[i] == ',')
                std::cout << 'M';
            else if (S[i] == '.')
                std::cout << ',';
            else if (S[i] == '/')
                std::cout << '.';

            else if ('0' <= S[i] && S[i] <= '9')
                std::cout << nums[S[i] - '0'];

            else if ('A' <= S[i] && S[i] <= 'Z')
                std::cout << alp[S[i] - 'A'];

            else if (S[i] == ' ')
                std::cout << ' ';
        }
        std::cout << '\n';
    }
    

    return 0;
}