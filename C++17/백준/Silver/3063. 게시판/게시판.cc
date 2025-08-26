#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int T; std::cin >> T;
    while (T--)
    {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        std::cin >>
            x1 >> y1 >>
            x2 >> y2 >>
            x3 >> y3 >>
            x4 >> y4;

        int space = (x2 - x1) * (y2 - y1);
        std::pair<int, int> left_low = {
            std::max(x1, x3),
            std::max(y1, y3)
        };

        std::pair<int, int> right_upper = {
            std::min(x2, x4),
            std::min(y2, y4)
        };

        std::cout << space
            - (std::max(0, right_upper.first - left_low.first) * (std::max(0, right_upper.second - left_low.second)))
            << '\n';
    }

    return 0;
}