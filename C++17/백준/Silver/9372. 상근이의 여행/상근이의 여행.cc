#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int T, N, M, cA, cB;
	std::cin >> T;

	while (T--)
	{
		std::cin >> N >> M;

		bool* visited = new bool[N + 1];
		std::fill(visited, visited + N + 1, false);
		// 동적 배열 선언.

		int count = 0;

		std::vector<std::vector<int>> V(N + 1); // 2차원 Vector
		for (int i = 0; i < M; i++)
		{
			std::cin >> cA >> cB; // 나라 2개 입력받기.
			V[cA].push_back(cB);
			V[cB].push_back(cA); // 쌍방으로 넣어줌.
		}

		for (int i = 1; i <= N; i++)
		{
			for (int j = 0; j < V[i].size(); j++)
			{
				if (!visited[V[i][j]]) // i번째 나라 출발하는 비행기 중, j번째 나라로 가는 비행기 안 탔으면
				{
					count++;
					visited[V[i][j]] = true; // 방문 처리 후 count 추가.
				}
			}
		}
		std::cout << count - 1 << '\n';

		// 동적 배열 삭제
		delete[] visited;
	}
	return 0;
}