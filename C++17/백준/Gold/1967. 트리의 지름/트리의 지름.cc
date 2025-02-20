#include <iostream>
#include <algorithm>
#include <vector>

int global_max = 0;

int DFS(std::vector<std::vector<std::pair<int, int>>>& v, int visiting, int distance)
{
    // 우리의 목표 :
    // 1) 같은 루트를 가지는 자식 트리들이 존재함
    // 2) 자식 트리들 사이의 거리가 존재함
    // 3) 루트 기준 (두 거리의 합이 가장 큰 놈)이 트리의 지름

    std::vector<int> max_array;

    for (int i = 0; i < v[visiting].size(); i++) // [0, 2]번 순회
    {
        int tmp = DFS(v, v[visiting][i].first, v[visiting][i].second); // 거리를 tmp에 저장.

        max_array.push_back(tmp);
        //std::cout << "tmp : " << tmp << '\n' << "global_max : " << global_max << '\n';
    }

    std::sort(max_array.begin(), max_array.end(), std::greater<int>());

    if (max_array.size() >= 2)
        global_max = (global_max > max_array[0] + max_array[1] ? global_max : max_array[0] + max_array[1]);
    else if (max_array.size() == 1)
        global_max = (global_max > max_array[0] ? global_max : max_array[0]);

    if (max_array.size() > 0)
        return max_array[0] + distance;
    else
        return distance;
}

int main()
{
    int N, a, b, w;

    std::cin >> N;
    std::vector<std::vector<std::pair<int, int>>> V(N + 1);

    for (int i = 0; i < N - 1; i++)
    {
        std::cin >> a >> b >> w;
        V[a].push_back({ b, w });
    }

    if (N == 1)
        std::cout << 0;
    else
    {
        DFS(V, 1, 0);
        std::cout << global_max; // 트리 구조, 시작점, 임시값 입력
    }

    return 0;
}