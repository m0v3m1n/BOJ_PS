#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N, K, W, X, Y; std::cin >> T;

	while (T--)
	{
		std::cin >> N >> K;

		std::vector<int> building(N + 1, 0); // 건설에 들어간 총 시간.
		std::vector<int> build_time(N + 1); // 건설 필요 시간.
		std::vector<int> build_need(N + 1); // 진입 차수 저장.
		std::vector<std::vector<int>> build_graph(N + 1); // 2차원 vector.

		std::queue<int> Q; // 위상 정렬용 Queue

		for (int i = 1; i <= N; i++)
			std::cin >> build_time[i];

		for (int i = 0; i < K; i++)
		{
			std::cin >> X >> Y;
			build_need[Y]++; // 진입차수 증가.
			build_graph[X].push_back(Y); // 노드 사이 연결. (방향 존재)
		}

		for (int i = 1; i <= N; i++)
			if (build_need[i] == 0)
			{
				Q.push(i); // 진입 차수 0인 노드 --> 큐에 삽입
				building[i] = build_time[i];
			}

		while (!Q.empty())
		{
			int now = Q.front();
			Q.pop(); // 맨 앞 노드 저장 후 pop.

			for (int i = 0; i < build_graph[now].size(); i++)
			{
				int next = build_graph[now][i]; // next = 다음 노드(다음 건물) 번호
				building[next] = std::max(building[next], building[now] + build_time[next]);
				// 다음 건물까지의 건설 비용 = 지금까지 지어졌던 선행 건물의 비용 vs 지금 지어지는 선행 건물의 비용

				if (--build_need[next] == 0) // 지웠을 때 진입차수가 0이면? (일단 지우고 봄)
					Q.push(next);
			}
		}

		std::cin >> W;
		std::cout << building[W] << '\n';
	}

	return 0;
}