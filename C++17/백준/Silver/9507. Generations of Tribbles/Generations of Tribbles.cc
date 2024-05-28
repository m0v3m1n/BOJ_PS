#include <iostream>

long long DP[70];

int main()
{
	DP[0] = 1; DP[1] = 1; DP[2] = 2; DP[3] = 4;
	for (int i = 4; i < 70; i++)
		DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3] + DP[i - 4];

	int N, F; std::cin >> N;
	while (N--)
	{
		std::cin >> F;
		std::cout << DP[F] << '\n';
	}
	return 0;
}