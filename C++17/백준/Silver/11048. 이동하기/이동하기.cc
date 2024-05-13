#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, t; std::cin >> N >> M;
	std::vector<int> tmp(M, 0);
	std::vector<std::vector<int>> V, DP;

	for (int i = 0; i < N; i++)
	{
		V.push_back(tmp);
		DP.push_back(tmp);
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			std::cin >> V[i][j];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (i == 0 && j == 0)
				DP[i][j] = V[i][j];
			else if (i == 0) // 맨 윗줄
				DP[i][j] = V[i][j] + DP[i][j - 1];
			else if (j == 0)
				DP[i][j] = V[i][j] + DP[i - 1][j];
			else
				DP[i][j] = V[i][j] + std::max(std::max(DP[i][j - 1], DP[i - 1][j]), DP[i - 1][j - 1]);
		}
	}
	//for (auto& K : V)
	//{
	//	for (auto& L : K)
	//		std::cout << L << ' ';
	//	std::cout << '\n';
	//}
	//for (auto& K : DP)
	//{
	//	for (auto& L : K)
	//		std::cout << L << ' ';
	//	std::cout << '\n';
	//}

	std::cout << DP[N - 1][M - 1];
	return 0;
}