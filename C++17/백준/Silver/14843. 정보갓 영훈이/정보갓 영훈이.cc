#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, P;
    double R, s, a, t, m, Score = 0;

    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> s >> a >> t >> m;
        Score += s * (1 + 1 / a) * (1 + m / t) / 4;
    } // 점수 합산

    std::cin >> P;
    std::vector<double> People(P); 

    for (int i = 0; i < P; i++)
        std::cin >> People[i];

    std::sort(People.begin(), People.end(), std::greater<double>()); // P명의 점수 기록 및 정렬.

    std::cout << std::fixed;
    std::cout.precision(2);

    if (People[std::floor((P + 1) * 0.15) - 1] <= Score)
        std::cout << "The total score of Younghoon \"The God\" is " << Score << '.';
    else
        std::cout << "The total score of Younghoon is " << Score << '.';
    
    return 0;
}