#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, cur = 1, sum = 0;
    std::cin >> N;

    std::vector<int> V(N);
    for (int i = 0; i < N; i++)
        std::cin >> V[i];

    for (int i = 0; i < N; i++)
        if (V[i] != cur)
            sum++;
        else
            cur++;

    std::cout << sum;
    return 0;
}
