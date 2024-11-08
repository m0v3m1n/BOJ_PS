#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

#define INF INT_MAX;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::vector<std::pair<int, int>> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i].first >> V[i].second;

	std::vector<std::vector<int>> DP(N, std::vector<int>(N));
	for (int i = 0; i < N; i++)
		DP[i][i] = 0;

	for (int L = 1; L < N; L++)
	{
		for (int i = 0; i < N - L; i++)
		{
			int j = i + L;
			DP[i][j] = INF;

			for (int k = i; k < j; k++)
			{
				int temp = DP[i][k] + DP[k + 1][j] + V[i].first * V[k].second * V[j].second;
				DP[i][j] = (temp < DP[i][j] ? temp : DP[i][j]);
			}
		}
	}

	std::cout << DP[0][N - 1];
}