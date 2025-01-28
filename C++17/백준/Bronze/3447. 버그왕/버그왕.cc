#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> V;

    while (!std::cin.eof())
    {
        std::string S;
        std::getline(std::cin, S);

        if(S.length() >= 3)
            for (int i = 0; i < S.length(); i++)
                if (i + 2 < S.length())
                    if (S[i] == 'B' && S[i + 1] == 'U' && S[i + 2] == 'G')
                    {
                        S.erase(i, 3);
                        i = -1;
                    }

        if (S.empty())
            V.push_back("\n");
        else
            V.push_back(S + "\n");
    }

    for (auto& K : V)
        std::cout << K;
}
