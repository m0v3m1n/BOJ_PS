#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<int, std::pair<int, int>> A, std::pair<int, std::pair<int, int>> B)
{
    if (A.second.first == B.second.first)
        if (A.second.second == B.second.second)
            return A.first < B.first;
        else
            return A.second.second < B.second.second;
    else
        return A.second.first < B.second.first;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    std::vector<std::pair<int, std::pair<int, int>>> V(N);

    for (int i = 0; i < N; i++)
    {
        int n, r, s, b;
        std::cin >> n >> r >> s >> b;

        V[i].first = n;
        V[i].second.first = r * s * b;
        V[i].second.second = r + s + b;
    }

    std::sort(V.begin(), V.end(), cmp);
    std::cout << V[0].first << ' ' << V[1].first << ' ' << V[2].first;

    return 0;
}