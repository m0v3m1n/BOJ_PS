#include <iostream>

int DP[1025][1025];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, tmp, sum, x1, x2, y1, y2;
	std::cin >> N >> M;

	for (int i = 0; i <= N; i++)
		for (int j = 0; j <= N; j++)
			if (i == 0 || j == 0)
				DP[i][j] = 0;
			else
			{
				std::cin >> tmp;
				DP[i][j] = DP[i][j - 1] + tmp;
			}

	for (int i = 0; i < M; i++)
	{
		sum = 0;
		std::cin >> x1 >> y1 >> x2 >> y2;

		for (int x = x1; x <= x2; x++)
		{
			sum += DP[x][y2];
			sum -= DP[x][y1 - 1];
		}

		std::cout << sum << '\n';
	}
	return 0;
}