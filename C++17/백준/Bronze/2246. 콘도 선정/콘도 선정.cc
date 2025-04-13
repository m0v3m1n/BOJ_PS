#include <iostream>
#include <vector>
#include <tuple>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, X = 0;
    std::cin >> N;

    std::vector<std::tuple<int, int, int>> V(N);
    for (int i = 0; i < N; i++)
    {
        int D, C; std::cin >> D >> C;
        V[i] = std::make_tuple(i, D, C);
    }

    for (int i = 0; i < N; i++)
    {
        bool flag = true;

        for (int j = 0; j < N; j++)
        {
            if (i != j)
            {
                if (std::get<1>(V[i]) >= std::get<1>(V[j]) && std::get<2>(V[i]) >= std::get<2>(V[j]))
                {
                    flag = false;
                    break;
                }

                if (std::get<2>(V[i]) >= std::get<2>(V[j]) && std::get<1>(V[i]) >= std::get<1>(V[j]))
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            X++;
    }
        
    std::cout << X;
}