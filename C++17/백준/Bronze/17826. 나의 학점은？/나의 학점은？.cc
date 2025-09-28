#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::vector<int> scores(50);
    for (auto& K : scores)
        std::cin >> K;
    int S; std::cin >> S;

    std::sort(scores.begin(), scores.end(), std::greater<int>());

    if (S >= scores[5 - 1])
        std::cout << "A+";
    else if (S >= scores[15 - 1])
        std::cout << "A0";
    else if (S >= scores[30 - 1])
        std::cout << "B+";
    else if (S >= scores[35 - 1])
        std::cout << "B0";
    else if (S >= scores[45 - 1])
        std::cout << "C+";
    else if (S >= scores[48 - 1])
        std::cout << "C0";
    else // 48 ~ 50
        std::cout << "F";
}