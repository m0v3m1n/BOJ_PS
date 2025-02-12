#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool flag = false;
    std::string S, result = "";
    std::string exception[10] = {
        "i",
        "pa",
        "te",
        "ni",
        "niti",
        "a",
        "ali",
        "nego",
        "no",
        "ili"
    };

    while (1)
    {
        std::cin >> S;
        if (std::cin.eof())
            break;

        flag = false;

        if (result.empty())
            result += (S[0] - 'a' + 'A');
        else
        {
            for (auto& K : exception)
                if (S == K)
                {
                    flag = true;
                    break;
                }

            if (flag)
                continue;

            result += (S[0] - 'a' + 'A');
        }
    }

    std::cout << result;
    return 0;
}
