#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N, M;
    std::cin >> N >> M;

    std::vector<int> light(M);
    for (int i = 0; i < M; i++)
        std::cin >> light[i];

    int first_gap = light[0] - 0;
    int max_gap = first_gap;

    for (int i = 0; i < M - 1; i++)
        if ((light[i + 1] - light[i] + 1) / 2 > max_gap)
            max_gap = (light[i + 1] - light[i] + 1) / 2;

    int right_gap = N - light[M - 1];
    max_gap = max_gap > right_gap ? max_gap : right_gap;

    std::cout << max_gap; // max_gap은 가로등 사이의 거리 중 가장 긴 거리
    return 0;
}