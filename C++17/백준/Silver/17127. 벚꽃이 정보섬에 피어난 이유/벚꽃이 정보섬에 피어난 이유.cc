#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, max = 0, tmp, sum; std::cin >> N;

    std::vector<int> V(N);
    for (int i = 0; i < N; i++)
        std::cin >> V[i];

    for(int i = 0; i < N - 3; i ++)
        for(int j = i + 1; j < N - 2; j++)
            for(int k = j + 1; k < N - 1; k++)
                for (int l = k + 1; l < N; l++)
                {
                    sum = 0;
                    tmp = 1;

                    for (int iter = i; iter < j; iter++)
                        tmp *= V[iter];
                    sum += tmp; tmp = 1;

                    for(int iter = j; iter < k; iter++)
                        tmp *= V[iter];
                    sum += tmp; tmp = 1;

                    for (int iter = k; iter < l; iter++)
                        tmp *= V[iter];
                    sum += tmp; tmp = 1;

                    for (int iter = l; iter < N; iter++)
                        tmp *= V[iter];
                    sum += tmp; tmp = 1;

                    //std::cout << i << ' ' << j << ' ' << k << ' ' << l << ' ';
                    //std::cout << sum << '\n';

                    if (sum > max)
                        max = sum;
                }

    std::cout << max;
    return 0;
}