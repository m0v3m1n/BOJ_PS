#include <iostream>
#include <queue>
#include <vector>

void BFS(int N, int start, std::vector<std::vector<int>>& VEC)
{
    std::vector<bool> visited(N + 1, false);
    // 방문 여부 체크할 배열 만들어 줍니다
    // 이때 N개 컴퓨터니까, 1번부터 시작하기 위해 (N + 1) 배열

    std::queue<int> Q; // BFS용 Queue 선언.
    Q.push(start); // 시작점 넣어줌. 문제는 1번 컴퓨터 고정이어서 start에 1 들어가있음.
    visited[start] = true; // 시작점은 방문했다 가정.

    while (!Q.empty()) // 큐가 빌때까지, 즉 다 탐색할때까지 반복.
    {
        int curNode = Q.front(); // 현재 컴퓨터 번호를 저장 후,
        Q.pop(); // 현재 컴퓨터를 방문했으므로 queue에서 빼줌.

        for (auto& K : VEC[curNode]) // 현재 컴퓨터와 연결되어 있는 컴퓨터 탐색.
            // for-each문을 사용해 간편하게 순회 돌아봅시다
            if (visited[K] == false) // 방문하지 않았으면
            {
                Q.push(K); // 다음 탐색에 넣어줍니다.
                visited[K] = true; // 방문 처리도 해줌.
            }
    }
    // while문을 탈출했다는 것은 탐색이 종료되었다는 점.
    // 즉, 1번부터 N번까지의 컴퓨터 중 방문한 컴퓨터의 개수를 찾으면 됨.

    int count = 0; // 초기값은 0.
    for (int i = 1; i <= N; i++) // 1번부터 N번까지
        if (visited[i] == true)
            count++; // 방문했다면 바이러스 걸렸으므로 count++;

    std::cout << count - 1; // 1번 컴퓨터에 의한 감염이 답 --> 1번 컴퓨터는 제외.
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K;
    std::cin >> N >> K;

    std::vector<std::vector<int>> V(N + 1);
    // 만약 1번 컴퓨터와 2,3,4번 컴퓨터가 연결되어 있다면,
    // V[1]에 2,3,4 가 저장되어 있음. (V[1]은 1번 컴퓨터 vector)

    int node1, node2;

    for (int i = 0; i < K; i++)
    {
        std::cin >> node1 >> node2;
        V[node1].push_back(node2);
        V[node2].push_back(node1);
    }

    BFS(N, 1, V);
    // 컴퓨터 개수랑 1번 컴퓨터부터 시작한다는 매개변수, 벡터 던져주고
    // BFS 시작해보도록 하겠습니다

    return 0;
}
