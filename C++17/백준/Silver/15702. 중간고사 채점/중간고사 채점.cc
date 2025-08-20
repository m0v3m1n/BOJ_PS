#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<int, int> a, std::pair<int, int> b)
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
    
    char o_x;
    int N, M, tmp;
    std::vector<int> q;
    std::vector<std::pair<int, int>> s;
    
    std::cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        q.push_back(tmp);
    }

    for (int i = 0; i < M; i++)
    {
        std::cin >> tmp;
        s.push_back({ tmp, 0 });

        for (int j = 0; j < N; j++)
        {
            std::cin >> o_x;
            if (o_x == 'O')
                s[i].second += q[j];
        }
    }

    std::sort(s.begin(), s.end(), cmp);
    std::cout << s[0].first << ' ' << s[0].second;

    return 0;
}