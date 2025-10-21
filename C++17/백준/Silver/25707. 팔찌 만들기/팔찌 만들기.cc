#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> V(N);

    for (auto& K : V)
        std::cin >> K;
    std::sort(V.begin(), V.end());

    std::cout << 2 * (V[N - 1] - V[0]);
    return 0;
}