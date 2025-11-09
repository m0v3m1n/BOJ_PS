#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    double W, H, X, Y, x, y;
    int P, cnt = 0;

    std::cin >> W >> H >> X >> Y >> P;

    for (int i = 0; i < P; i++)
    {
        std::cin >> x >> y;

        // 직사각형 내부?
        if (X <= x && x <= X + W && Y <= y && y <= Y + H)
            cnt++;
        else if (std::pow(x - X, 2) + std::pow(y - (Y + H / 2.0), 2) <= std::pow((H / 2.0), 2)) // 왼쪽 반원
            cnt++;
        else if (std::pow(x - (X + W), 2) + std::pow(y - (Y + H / 2.0), 2) <= std::pow((H / 2.0), 2)) // 오른쪽 반원
            cnt++;
    }
    std::cout << cnt;
    return 0;
}