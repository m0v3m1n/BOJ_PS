#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string S, str = "";
    std::getline(std::cin, S);

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'U' && str == "")
            str.push_back(S[i]);
        else if(S[i] == 'C' && str == "U")
            str.push_back(S[i]);
        else if (S[i] == 'P' && str == "UC")
            str.push_back(S[i]);
        else if (S[i] == 'C' && str == "UCP")
            str.push_back(S[i]);
    }

    if (str == "UCPC")
        std::cout << "I love UCPC";
    else
        std::cout << "I hate UCPC";
    return 0;
}