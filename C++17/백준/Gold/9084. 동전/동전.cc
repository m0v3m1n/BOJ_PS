#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N, M;
	std::cin >> T;

	while (T--)
	{
		std::cin >> N;

		std::vector<int> coin(N + 1);
		for (int i = 1; i <= N; i++)
			std::cin >> coin[i];
		coin[0] = 0; // Init.

		std::cin >> M;
		std::vector<std::vector<int>> DP(N + 1, std::vector<int>(M + 1, 0));
		for (int i = 0; i <= N; i++)
			DP[i][0] = 1;

		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= M; j++)
				if (j - coin[i] < 0)
					DP[i][j] = DP[i - 1][j];
				else
					DP[i][j] = DP[i - 1][j] + DP[i][j - coin[i]];

		std::cout << DP[N][M] << '\n';
	}
}