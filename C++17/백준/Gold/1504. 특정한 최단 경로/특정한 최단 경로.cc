#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>

#define INF INT_MAX / 4

int dijkstra(std::vector<std::vector<int>>& mat, int N, int start, int end)
{
	std::vector<int> dist(N + 1, INF);
	std::vector<bool> visited(N + 1, false);

	dist[start] = 0;

	for (int i = 1; i <= N; i++)
	{
		int v = -1;

		for (int j = 1; j <= N; j++)
			if (!visited[j] && (v == -1 || dist[j] < dist[v])) // 방문하지 않았고, v가 처음이거나 또는 v보다 작은 i가 있다면
				v = j; // 변경.

		if (v == -1 || dist[v] == INF) // 아무데도 방문 X 또는 
			break;

		visited[v] = true;

		for (int to = 1; to <= N; to++)
		{
			if (mat[v][to] < INF)
				if (dist[to] > dist[v] + mat[v][to])
					dist[to] = dist[v] + mat[v][to];
		}
	}

	return dist[end];
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, E, p1, p2, c; std::cin >> N >> E;

	std::vector<std::vector<int>> matrix(N + 1, std::vector<int>(N + 1, INF));
	for (int i = 1; i <= N; i++)
		matrix[i][i] = 0;

	for (int i = 0; i < E; i++)
	{
		std::cin >> p1 >> p2 >> c;
		matrix[p1][p2] = c;
		matrix[p2][p1] = c;
	}

	std::cin >> p1 >> p2; // p1, p2는 반드시 지나야 하는 점.

	// 1번부터 N번 정점으로 이동, 이때 p1, p2를 반드시 지남
	// 1 --> ... --> p1 --> p2 --> ... --> N 또는
	// 1 --> ... --> p2 --> p1 --> ... --> N 하면 됨.

	int case1 = 0, case2, p1_p2 = 0;
	p1_p2 = dijkstra(matrix, N, p1, p2);

	case1 = dijkstra(matrix, N, 1, p1) + p1_p2 + dijkstra(matrix, N, p2, N);
	case2 = dijkstra(matrix, N, 1, p2) + p1_p2 + dijkstra(matrix, N, p1, N);

	int ans = std::min(case1, case2);
	if (ans >= INF)
		std::cout << -1;
	else
		std::cout << ans;

	return 0;
}