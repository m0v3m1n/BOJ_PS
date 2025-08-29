#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::pair<int, int> points[3];
    std::cin 
        >> points[0].first >> points[0].second
        >> points[1].first >> points[1].second
        >> points[2].first >> points[2].second;

    std::sort(points, points + 3); // X, Y 정렬 --> 맨왼쪽 점부터 비교하면 2번만 비교하면 끝임

    if ((points[1].first - points[0].first) * (points[2].second - points[0].second)
        == (points[1].second - points[0].second) * (points[2].first - points[0].first))
        std::cout << "WHERE IS MY CHICKEN?";
    else
        std::cout << "WINNER WINNER CHICKEN DINNER!";

    return 0;
}