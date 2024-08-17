#include <iostream>
#include <vector>
#include <queue>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M; std::cin >> N >> M;
    int from, to;

    std::vector<std::vector<int>> graph(N);
    std::vector<int> into_graph(N, 0);

    for (int i = 0; i < M; i++)
    {
        std::cin >> from >> to; // From, To는 1번부터. --> graph에선 0번부터로 한 뒤, 나중에 출력할 때 + 1 하면 됨.
        graph[from - 1].push_back(to - 1); // From --> To 그래프 형성.
        into_graph[to - 1]++; // 진입차수 증가.
    }

    std::queue<int> Q, order;
    for (int i = 0; i < N; i++)
        if (into_graph[i] == 0) // 진입 차수가 0인 노드들 Queue에 삽입.
            Q.push(i);

    while (!Q.empty()) // Queue가 빌 때까지.
    {
        int front = Q.front();

        Q.pop();
        order.push(front);

        for (auto K : graph[front]) // K : 빼낸 노드의 그래프의 원소. ex) 1 -> 2, 2 -> 3이면 1 기준 2가 나옴.
        {
            into_graph[K]--;
            if (into_graph[K] == 0)
                Q.push(K);
        }
    }

    while (!order.empty())
    {
        std::cout << order.front() + 1 << ' ';
        order.pop();
    }

    return 0;
}
