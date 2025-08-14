#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    std::string S;

    while (N--)
    {
        std::cin >> S;

        if (S[S.length() - 1] == 'a')
            S.replace(S.length() - 1, 1, "as");

        else if (S[S.length() - 1] == 'i' || S[S.length() - 1] == 'y')
            S.replace(S.length() - 1, 1, "ios");

        else if (S[S.length() - 1] == 'l')
            S.replace(S.length() - 1, 1, "les");

        else if (S[S.length() - 1] == 'n')
            S.replace(S.length() - 1, 1, "anes");
        else if (S[S.length() - 2] == 'n' && S[S.length() - 1] == 'e')
            S.replace(S.length() - 2, 2, "anes");

        else if (S[S.length() - 1] == 'o')
            S.replace(S.length() - 1, 1, "os");

        else if (S[S.length() - 1] == 'r')
            S.replace(S.length() - 1, 1, "res");

        else if (S[S.length() - 1] == 't')
            S.replace(S.length() - 1, 1, "tas");

        else if (S[S.length() - 1] == 'u')
            S.replace(S.length() - 1, 1, "us");

        else if (S[S.length() - 1] == 'v')
            S.replace(S.length() - 1, 1, "ves");

        else if (S[S.length() - 1] == 'w')
            S.replace(S.length() - 1, 1, "was");

        else
            S.append("us");

        std::cout << S << '\n';
    }
}