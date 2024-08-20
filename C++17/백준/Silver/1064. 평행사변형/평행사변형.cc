#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    std::pair<double, double> point[3];
    std::cin >>
        point[0].first >> point[0].second >> 
        point[1].first >> point[1].second >> 
        point[2].first >> point[2].second;

    std::sort(point, point + 3);

    if ((point[0].second - point[1].second) * (point[1].first - point[2].first)
        == (point[1].second - point[2].second) * (point[0].first - point[1].first))
        std::cout << -1.0;
    else
    {
        double dist_1, dist_2, dist_3;

        dist_1 = std::abs(std::pow
        (std::pow((point[0].first - point[1].first), 2) + std::pow((point[0].second - point[1].second), 2), 0.5));
        dist_2 = std::abs(std::pow
        (std::pow((point[1].first - point[2].first), 2) + std::pow((point[1].second - point[2].second), 2), 0.5));
        dist_3 = std::abs(std::pow
        (std::pow((point[0].first - point[2].first), 2) + std::pow((point[0].second - point[2].second), 2), 0.5));

        double len[3];
        len[0] = dist_1 * 2 + dist_2 * 2;
        len[1] = dist_2 * 2 + dist_3 * 2;
        len[2] = dist_1 * 2 + dist_3 * 2;

        std::sort(len, len + 3);

        std::cout << std::fixed;
        std::cout.precision(16);
        std::cout << len[2] - len[0];
    }

    return 0;
}
