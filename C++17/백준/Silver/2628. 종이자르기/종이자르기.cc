#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int M, N, r, dir, loc; std::cin >> M >> N >> r;
    std::vector<int> garo, cutgaro;
    std::vector<int> sero, cutsero;

    for (int i = 0; i < r; i++)
    {
        std::cin >> dir >> loc;
        if (dir == 0) // dir이 0이면 가로
            garo.push_back(loc);
        else
            sero.push_back(loc);
    }

    std::sort(garo.begin(), garo.end());
    std::sort(sero.begin(), sero.end());

    int size = 0;
    for (int i = 0; i < garo.size() + 1; i++)
    {
        if (i == garo.size())
        {
            size = N - size;
            cutgaro.push_back(size);
        }
        else
        {
            size = garo[i] - size;
            cutgaro.push_back(size);
            size = garo[i];
        }
    }

    size = 0;
    for (int i = 0; i < sero.size() + 1; i++)
    {
        if (i == sero.size())
        {
            size = M - size;
            cutsero.push_back(size);
        }
        else
        {
            size = sero[i] - size;
            cutsero.push_back(size);
            size = sero[i];
        }
    }

    std::sort(cutgaro.begin(), cutgaro.end());
    std::sort(cutsero.begin(), cutsero.end());

    //for (auto& K : cutgaro)
    //    std::cout << K << ' ';

    //std::cout << '\n';

    //for (auto& K : cutsero)
    //    std::cout << K << ' ';

    std::cout << cutgaro[cutgaro.size() - 1] * cutsero[cutsero.size() - 1];
    // 최대값 출력
    return 0;
}