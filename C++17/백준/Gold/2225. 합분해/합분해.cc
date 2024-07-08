#include <iostream>

int main()
{
	int N, K; std::cin >> N >> K;

	int DP[201][201];
	for (int i = 0; i <= 200; i++)
	{
		DP[1][i] = 1;
		DP[i][0] = 1;
	}

	for (int k = 2; k <= 200; k++)
		for (int n = 1; n <= 200; n++)
			DP[k][n] = (DP[k - 1][n] % 1000000000 + DP[k][n - 1] % 1000000000) % 1000000000;

	std::cout << DP[K][N];
}