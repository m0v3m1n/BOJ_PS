#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<std::string, int> a, std::pair<std::string, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second > b.second;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    std::vector<std::pair<std::string, int>> V(N);

    for (int i = 0; i < N; i++)
        std::cin >> V[i].first >> V[i].second;
    
    std::sort(V.begin(), V.end(), cmp);
    std::cout << V[0].first;

    return 0;
}