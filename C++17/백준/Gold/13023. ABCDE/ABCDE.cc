#include <iostream>
#include <vector>
#include <algorithm>

bool DFS(std::vector<bool>& visited, std::vector<std::vector<int>>& V, int cur, int depth)
{
    if (depth == 4)
        return true;

    visited[cur] = true; // 현재 노드 방문 처리.

    for (auto& K : V[cur])
    {
        int next = K;

        if (!visited[next]) // 방문하지 않았다면
        {
            if (DFS(visited, V, next, depth + 1)) // 만약 끝까지 갔다 쳤을때 true라면?
                return true;
        }
    }
    visited[cur] = false;

    return false; // 해당 경로에서 답을 못찾았으면 false.
}

int main()
{
    int N, M, a, b;
    std::cin >> N >> M;

    std::vector<std::vector<int>> V(N);
    for (int i = 0; i < M; i++)
    {
        std::cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }
    
    // A -> B -> C -> D -> E 가 성립하기 위해선, 인원수 N에 대해 4번의 화살표가 있어야 함.
    std::vector<bool> visited(N, false);

    for (int i = 0; i < N; i++)
    {
        bool flag = DFS(visited, V, i, 0);

        if (flag)
        {
            std::cout << 1;
            return 0;
        }
    }

    std::cout << 0; // 만약 존재했다면 진작에 프로그램 종료되었을 것임
    return 0;
}