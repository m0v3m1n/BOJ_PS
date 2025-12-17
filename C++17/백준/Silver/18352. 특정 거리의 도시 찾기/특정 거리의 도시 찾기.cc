#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

std::vector<int> BFS(std::vector<std::vector<int>>& map, std::vector<bool>& visited, int N, int K, int X)
{
	std::vector<int> dist(N + 1, 0); // 출발도시 X 기준 거리 배열
	std::queue<int> Q;
	Q.push(X);

	while (!Q.empty())
	{
		int cur = Q.front(); // 큐 맨 앞에 있는 도시 번호.
		Q.pop();

		for (int i = 0; i < map[cur].size(); i++) // 현재 방문한 도시 기준, 연결되어 있는 도시들에 대해
		{
			if (!visited[map[cur][i]]) // 연결된 도시가 방문하지 않았다면?
			{
				visited[map[cur][i]] = true;
				Q.push(map[cur][i]);
				dist[map[cur][i]] = dist[cur] + 1;
			}
		}
	}

	return dist;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	bool flag = false;
	int N, M, K, X, cityA, cityB;
	std::cin >> N >> M >> K >> X;

	std::vector<bool> visited(N + 1, false);
	visited[X] = true;

	std::vector<std::vector<int>> map(N + 1);
	for (int i = 0; i < M; i++)
	{
		std::cin >> cityA >> cityB;
		map[cityA].push_back(cityB);
	}

	std::vector<int> dist = BFS(map, visited, N, K, X);
	for (int i = 1; i <= N; i++)
		if (dist[i] == K)
		{
			std::cout << i << '\n';
			flag = true;
		}

	if (!flag)
		std::cout << -1;

	return 0;
}