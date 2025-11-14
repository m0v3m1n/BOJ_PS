#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int N, tmp;
	std::cin >> N;
	std::vector<int> V(N + 2, 0), LIS(N + 2, 0), LDS(N + 2, 0);

	for (int i = 1; i <= N; i++)
		std::cin >> V[i];

	// First, LIS
	for (int i = 1; i <= N; i++)
	{
		tmp = 0;

		for (int j = 0; j < i; j++)
		{
			if (V[i] > V[j])
				tmp = tmp > LIS[j] ? tmp : LIS[j];
		}

		LIS[i] = tmp + 1;
	}

	// Second, LDS
	for (int i = N; i >= 1; i--)
	{
		tmp = 0;

		for (int j = N + 1; j > i; j--)
		{
			if (V[i] > V[j])
				tmp = tmp > LDS[j] ? tmp : LDS[j];
		}

		LDS[i] = tmp + 1;
	}

	tmp = 0;
	for (int i = 1; i <= N; i++)
		tmp = tmp > LIS[i] + LDS[i] - 1 ? tmp : LIS[i] + LDS[i] - 1;
	std::cout << tmp;

	return 0;
}