#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, tmp;
    std::vector<int> V;

    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        V.push_back(tmp);
    }

    std::sort(V.begin(), V.end());
    for (auto& K : V)
        std::cout << K << '\n';

    return 0;
}