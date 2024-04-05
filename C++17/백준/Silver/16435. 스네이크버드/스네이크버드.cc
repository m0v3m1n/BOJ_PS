#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, L;
    std::cin >> N >> L;

    std::vector<int> V(N);
    for (int i = 0; i < N; i++)
        std::cin >> V[i];

    std::sort(V.begin(), V.end());
    for (int i = 0; i < N; i++)
        if (V[i] <= L)
            L++;

    std::cout << L;
    return 0;
}