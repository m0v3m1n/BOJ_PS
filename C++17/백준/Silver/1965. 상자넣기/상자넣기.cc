#include <iostream>

int BOX[1001];
int DP[1001];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N;  std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> BOX[i];

	for (int i = 0; i < N; i++)
	{
		if (DP[i] == 0)
			DP[i] = 1;

		for (int j = 0; j < i; j++)
			if (BOX[i] > BOX[j])
				if (DP[i] < DP[j] + 1)
					DP[i] = DP[j] + 1;
	}

	int max = 0;
	for (int i = 0; i < N; i++)
	{
		if (DP[i] > max)
			max = DP[i];
		// std::cout << i << "번째 값 : " << DP[i] << '\n';
	}
	std::cout << max;
	return 0;
}