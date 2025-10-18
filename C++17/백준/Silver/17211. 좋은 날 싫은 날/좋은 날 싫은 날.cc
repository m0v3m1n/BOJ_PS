#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, C;
    double gg, gb, bg, bb;
    std::cin >> N >> C >> gg >> gb >> bg >> bb;

    std::vector<double> good(N + 1), bad(N + 1);

    if (C == 0)
    {
        good[0] = 1;
        bad[0] = 0;
    }
    else
    {
        good[0] = 0;
        bad[0] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        good[i] = good[i - 1] * gg + bad[i - 1] * bg;
        bad[i] = good[i - 1] * gb + bad[i - 1] * bb;
    }

    good[N] = std::floor(good[N] * 1000 + 0.5);
    bad[N] = std::floor(bad[N] * 1000 + 0.5);

    std::cout << (int)good[N] << '\n' << (int)bad[N];
    return 0;
}