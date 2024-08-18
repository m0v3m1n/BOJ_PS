#include <iostream>
#include <vector>
#include <queue>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M, num, cycle_count = 0; std::cin >> N >> M;

    // 위상 정렬 준비물 : 상태 저장용 큐, 순서 저장용 벡터, 노드와 노드 사이 연결 그래프, 진입 차수 그래프.
    std::vector<std::vector<int>> graph(N);
    std::vector<int> into_degree(N, 0);
    std::vector<int> order;
    std::queue<int> working;

    for (int i = 0; i < M; i++)
    {
        int pre, post;
        std::cin >> num;

        std::cin >> pre;
        for (int j = 1; j < num; j++)
        {
            std::cin >> post;

            graph[pre - 1].push_back(post - 1);
            into_degree[post - 1]++;

            pre = post;
        }
    }

    for (int i = 0; i < N; i++)
        if (into_degree[i] == 0)
            working.push(i); // 진입 차수 0인 노드 넣어버리기

    while (!working.empty())
    {
        int front = working.front();
        working.pop();

        cycle_count++;
        order.push_back(front);

        // 큐 맨 앞의 노드를 삭제 후, 이 노드의 다음 노드의 진입 차수를 감소. 0이면 큐에 추가.
        for (auto& K : graph[front]) // 맨 앞의 노드의 그래프.
        {
            into_degree[K]--;
            if (into_degree[K] == 0)
                working.push(K);
        }
    }

    if (cycle_count == N) // 뽑아낸 횟수가 노드의 갯수 --> Cycle 아님.
        for (auto& K : order)
            std::cout << K + 1 << '\n';
    else
        std::cout << 0;

    return 0;
}
