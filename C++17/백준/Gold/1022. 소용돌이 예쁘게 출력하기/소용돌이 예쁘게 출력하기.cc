#include <iostream>
#include <vector>
#include <cmath>
#include <string>

int search(int r, int c)
{
    // x, y는 좌표.
    if (r == 0 && c == 0)
        return 1;
    else if (r > 0 && c > 0 && r == c)
        return (1 + (r * (r + 1) * 4));

    int dir = std::max(std::abs(r), std::abs(c)) - 1; // -4, -3이면 3, 3부터 시작. 즉 dir == + 방향 대각선 기준점.
    int dist = 1 + (8 * (dir * (dir + 1) / 2)); // 1, 9, 25, 49, ...

    if (c == dir + 1)
        return dist + std::abs(dir - r) + 1;
    else if (r == -(dir + 1))
        return dist + (dir * 2 + 1) + std::abs(dir + 1 - c) + 1;
    else if (c == -(dir + 1))
        return dist + (dir * 2 + 1) + ((dir + 1) * 2) + std::abs(-(dir + 1) - r) + 1;
    else if (r == dir + 1)
        return dist + (dir * 2 + 1) + ((dir + 1) * 4) + std::abs(-(dir + 1) - c) + 1;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int r1, c1, r2, c2, max = 0; std::cin >> r1 >> c1 >> r2 >> c2;
    std::vector<std::vector<int>> map(std::abs(r1 - r2) + 1, std::vector<int>(std::abs(c1 - c2) + 1, 0)); // 맵 생성.


    // (0,0) = 원래의 (r1, c1).
    // (abs(r1 - r2) + 1, abs(c1 - c2) + 1) = (r2, c2)
    for (int i = 0; i < map.size(); i++) // 행.
        for (int j = 0; j < map[0].size(); j++) // 열.
        {
            map[i][j] = search(i + r1, j + c1);

            if (map[i][j] > max)
                max = map[i][j];
        }

    int len = std::to_string(max).size();

    for (int i = 0; i < map.size(); i++)
    {
        for (int j = 0; j < map[0].size(); j++)
        {
            std::cout.width(len);
            std::cout << map[i][j] << ' ';
        }
        if (i == map.size() - 1)
            break;
        std::cout << '\n';
    }

    return 0;
}