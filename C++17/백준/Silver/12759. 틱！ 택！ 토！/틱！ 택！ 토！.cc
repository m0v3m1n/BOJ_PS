#include <iostream>
#include <vector>
#include <tuple>

std::tuple<std::pair<int, int>, std::pair<int, int>, std::pair<int, int>> line[8] = {
    std::make_tuple(std::make_pair(1,1), std::make_pair(1,2), std::make_pair(1,3)),
    std::make_tuple(std::make_pair(2,1), std::make_pair(2,2), std::make_pair(2,3)),
    std::make_tuple(std::make_pair(3,1), std::make_pair(3,2), std::make_pair(3,3)), // 가로
    std::make_tuple(std::make_pair(1,1), std::make_pair(2,1), std::make_pair(3,1)),
    std::make_tuple(std::make_pair(1,2), std::make_pair(2,2), std::make_pair(3,2)),
    std::make_tuple(std::make_pair(1,3), std::make_pair(2,3), std::make_pair(3,3)), // 세로
    std::make_tuple(std::make_pair(1,1), std::make_pair(2,2), std::make_pair(3,3)),
    std::make_tuple(std::make_pair(1,3), std::make_pair(2,2), std::make_pair(3,1)) // 대각선
};

char map[4][4] = {'a', };

bool check(char c)
{
    for (int i = 0; i < 8; i++)
        if (map[std::get<0>(line[i]).first][std::get<0>(line[i]).second] == c
            && map[std::get<1>(line[i]).first][std::get<1>(line[i]).second] == c
            && map[std::get<2>(line[i]).first][std::get<2>(line[i]).second] == c)
            return true;

    return false;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int start, r, c; std::cin >> start;
    for (int i = 0; i < 9; i++)
    {
        std::cin >> r >> c;
        if (start % 2) // 1이면 1, --> o 먼저
            map[r][c] = 'o';
        else
            map[r][c] = 'x';

        start++;

        if (check('o'))
        {
            std::cout << 1;
            return 0;
        }
        else if (check('x'))
        {
            std::cout << 2;
            return 0;
        }
    }
    std::cout << 0;

    return 0;
}