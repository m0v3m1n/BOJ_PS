#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, count = 0; std::cin >> N;
    std::vector<std::vector<int>> V(N, std::vector<int>(N));
    std::pair<int, int> pro, stu;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            std::cin >> V[i][j];

            if (V[i][j] == 2)
            {
                stu.first = i;
                stu.second = j;
            }
            else if (V[i][j] == 5)
            {
                pro.first = i;
                pro.second = j;
            }
        }

    if (std::sqrt(std::pow(stu.first - pro.first, 2) + std::pow(stu.second - pro.second, 2)) >= 5.0)
    {
        for (int i = std::min(stu.first, pro.first); i <= std::max(stu.first, pro.first); i++)
            for (int j = std::min(stu.second, pro.second); j <= std::max(stu.second, pro.second); j++)
                if (V[i][j] == 1)
                    count++;

        if (count >= 3)
            std::cout << 1;
        else
            std::cout << 0;
    }
    else
        std::cout << 0;

    return 0;
}