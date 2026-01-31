#include <iostream>
#include <cmath>

int score(double x, double y)
{
    int score;
    double dist = std::sqrt(std::pow(x, 2) + std::pow(y, 2));

    if (dist <= 3.0)
        score = 100;
    else if (dist <= 6.0)
        score = 80;
    else if (dist <= 9.0)
        score = 60;
    else if (dist <= 12.0)
        score = 40;
    else if (dist <= 15.0)
        score = 20;
    else
        score = 0;

    return score;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--)
    {
        int p1 = 0, p2 = 0;
        double x1, y1, x2, y2, x3, y3;

        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        p1 = score(x1, y1) + score(x2, y2) + score(x3, y3);

        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        p2 = score(x1, y1) + score(x2, y2) + score(x3, y3);

        if (p1 > p2)
            std::cout << "SCORE: " << p1 << " to " << p2 << ", PLAYER 1 WINS." << '\n';
        else if (p1 == p2)
            std::cout << "SCORE: " << p1 << " to " << p2 << ", TIE." << '\n';
        else
            std::cout << "SCORE: " << p1 << " to " << p2 << ", PLAYER 2 WINS." << '\n';
    }

    return 0;
}