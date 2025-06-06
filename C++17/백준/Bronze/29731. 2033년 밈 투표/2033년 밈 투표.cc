#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool flag = false;
    int N; std::cin >> N;
    std::cin.ignore();

    std::string s;
    std::string S[7] =
    {
    "Never gonna give you up",
    "Never gonna let you down",
    "Never gonna run around and desert you",
    "Never gonna make you cry",
    "Never gonna say goodbye",
    "Never gonna tell a lie and hurt you",
    "Never gonna stop"
    };

    while (N--)
    {
        flag = false;
        std::getline(std::cin, s);

        for(auto&K:S)
            if (s == K)
            {
                flag = true;
                break;
            }

        if (!flag)
            break;
    }

    if (!flag)
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}