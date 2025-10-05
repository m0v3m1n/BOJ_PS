#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S;
    std::vector<std::string> colors;

    for (int i = 0; i < 4; i++)
    {
        std::cin >> S;
        colors.push_back(S);
    }

    std::sort(colors.begin(), colors.end());
    colors.erase(std::unique(colors.begin(), colors.end()), colors.end()); // 정렬 후 중복 색 제거

    // Brute Force... Let's go lol
    if (colors.size() == 1)
        std::cout << colors[0] << ' ' << colors[0];
    else if (colors.size() == 2)
    {
        std::cout << colors[0] << ' ' << colors[0] << '\n';
        std::cout << colors[0] << ' ' << colors[1] << '\n';

        std::cout << colors[1] << ' ' << colors[0] << '\n';
        std::cout << colors[1] << ' ' << colors[1] << '\n';
    }
    else if (colors.size() == 3)
    {
        std::cout << colors[0] << ' ' << colors[0] << '\n';
        std::cout << colors[0] << ' ' << colors[1] << '\n';
        std::cout << colors[0] << ' ' << colors[2] << '\n';

        std::cout << colors[1] << ' ' << colors[0] << '\n';
        std::cout << colors[1] << ' ' << colors[1] << '\n';
        std::cout << colors[1] << ' ' << colors[2] << '\n';

        std::cout << colors[2] << ' ' << colors[0] << '\n';
        std::cout << colors[2] << ' ' << colors[1] << '\n';
        std::cout << colors[2] << ' ' << colors[2] << '\n';
    }
    else if (colors.size() == 4)
    {
        std::cout << colors[0] << ' ' << colors[0] << '\n';
        std::cout << colors[0] << ' ' << colors[1] << '\n';
        std::cout << colors[0] << ' ' << colors[2] << '\n';
        std::cout << colors[0] << ' ' << colors[3] << '\n';

        std::cout << colors[1] << ' ' << colors[0] << '\n';
        std::cout << colors[1] << ' ' << colors[1] << '\n';
        std::cout << colors[1] << ' ' << colors[2] << '\n';
        std::cout << colors[1] << ' ' << colors[3] << '\n';

        std::cout << colors[2] << ' ' << colors[0] << '\n';
        std::cout << colors[2] << ' ' << colors[1] << '\n';
        std::cout << colors[2] << ' ' << colors[2] << '\n';
        std::cout << colors[2] << ' ' << colors[3] << '\n';

        std::cout << colors[3] << ' ' << colors[0] << '\n';
        std::cout << colors[3] << ' ' << colors[1] << '\n';
        std::cout << colors[3] << ' ' << colors[2] << '\n';
        std::cout << colors[3] << ' ' << colors[3] << '\n';
    }
    return 0;
}