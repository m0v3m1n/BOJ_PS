#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
    int N, M, tmp;
    bool flag = false;
    std::pair<int, int> A, B;

    std::cin >> N >> M;

    for(int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            std::cin >> tmp;
            if (tmp)
                if (!flag)
                {
                    A = { i, j };
                    flag = true;
                }
                else
                    B = { i, j };
        }

    std::cout << std::abs(B.first - A.first) + std::abs(B.second - A.second);
    return 0;
}
