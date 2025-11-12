#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

int BFS(std::vector<std::vector<char>>& M, int r, int c)
{
	int MR = M.size(), MC = M[0].size();
	int max_dist = 0;

	int rMove[4] = { -1, 1, 0, 0 };
	int cMove[4] = { 0, 0, -1, 1 };

	std::vector<std::vector<bool>> visited(MR, std::vector<bool>(MC, false));

	std::queue<std::pair<std::pair<int, int>, int>> Q; // X, Y 좌표 및 거리
	Q.push({ { r, c }, 0 });
	visited[r][c] = true;

	while (!Q.empty())
	{
		std::pair<std::pair<int, int>, int> cur = Q.front();
		if (cur.second > max_dist)
			max_dist = cur.second;

		Q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nextR = cur.first.first + rMove[i];
			int nextC = cur.first.second + cMove[i];

			if (0 <= nextR && nextR < MR
				&& 0 <= nextC && nextC < MC) // 지도 범위 안인지 판별
				if (M[nextR][nextC] == 'L' && !visited[nextR][nextC])
				{
					visited[nextR][nextC] = true; // 방문처리
					Q.push({ {nextR, nextC}, cur.second + 1 });
				}
		}
	}

	return max_dist;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int R, C, max = 0, dist; std::cin >> R >> C;
	std::vector<std::vector<char>> M(R, std::vector<char>(C));

	for (auto& K : M)
		for (auto& L : K)
			std::cin >> L;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (M[i][j] == 'L') // 땅이라면? --> 탐색 시작
			{
				dist = BFS(M, i, j);
				max = max > dist ? max : dist;
			}
		}
	}
	
	std::cout << max;
	return 0;
}