#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>

bool BFS(std::vector<std::pair<bool, std::pair<int, int>>>& c, std::pair<int, int> h, std::pair<int, int> p)
{
	std::queue<std::pair<int, int>> Q;
	Q.push(h);

	while (!Q.empty())
	{
		std::pair<int, int> currentP = Q.front();
		Q.pop();
		
		if (std::abs(currentP.first - p.first) + std::abs(currentP.second - p.second) <= 1000)
			return true;

		for (auto& K : c)
			if (!K.first && std::abs(currentP.first - K.second.first) + std::abs(currentP.second - K.second.second) <= 1000)
			{
				K.first = true;
				Q.push(K.second);
			}
	}

	return false;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N;
	std::pair<int, int> H, P; 

	std::cin >> T;

	while (T--)
	{
		std::cin >> N; // Input start.
		std::vector<std::pair<bool, std::pair<int, int>>> C(N, { false, std::make_pair(0, 0) });

		std::cin >> H.first >> H.second;

		for (int i = 0; i < N; i++)
			std::cin >> C[i].second.first >> C[i].second.second;
		
		std::cin >> P.first >> P.second; // Input end.
		
		bool possible = BFS(C, H, P); // 현재 맵 상태, 시작점, 끝점 던져주기.

		std::cout << (possible ? "happy" : "sad") << '\n';
	}
}