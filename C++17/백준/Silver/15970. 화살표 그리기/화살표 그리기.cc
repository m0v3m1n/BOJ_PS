#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, totalDist = 0, coord, color;
	std::cin >> N;

	std::vector<std::vector<int>> points(N + 1);

	for (int i = 1; i <= N; i++)
	{
		std::cin >> coord >> color;
		points[color].push_back(coord);
	}

	for (int i = 1; i <= N; i++)
	{
		std::sort(points[i].begin(), points[i].end());

		int pSize = points[i].size();

		if (pSize > 1) // 점이 두 개 이상일 때부터 거리가 성립.
			for (int j = 0; j < pSize; j++)
			{
				if (j == 0)
					totalDist += points[i][j + 1] - points[i][j];
				else if (j == pSize - 1)
					totalDist += points[i][j] - points[i][j - 1];
				else
					totalDist += std::min(points[i][j] - points[i][j - 1], points[i][j + 1] - points[i][j]);
			}
		else
			continue;
	}

	std::cout << totalDist;
	return 0;
}