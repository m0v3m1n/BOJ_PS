#include <iostream>
#include <algorithm>
#include <vector>

void backtracking(std::vector<int>& v, std::vector<int>& s, int start, int m, int count)
{
    if (count == m)
    {
        for (auto& K : s)
            std::cout << K << ' ';
        std::cout << '\n';
    }
    else
    {
        for (int i = start; i < v.size(); i++)
        {
            s.push_back(v[i]);
            backtracking(v, s, i, m, count + 1);
            s.pop_back();
        }
    }
}

int main()
{
    int N, M; std::cin >> N >> M;

    std::vector<int> V(N);
    std::vector<int> S;

    for (int i = 0; i < N; i++)
        std::cin >> V[i];

    std::sort(V.begin(), V.end()); // 정렬 후,
    V.erase(std::unique(V.begin(), V.end()), V.end()); // 중복되는 숫자 삭제.

    backtracking(V, S, 0, M, 0);

    return 0;
}