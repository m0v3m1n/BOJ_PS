#include <iostream>

int SEQ[1001];
int DP[1001];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N;  std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> SEQ[i];

	for (int i = 0; i < N; i++)
	{
		if (DP[i] == 0)
			DP[i] = 1;

		for (int j = 0; j < i; j++)
			if (SEQ[i] < SEQ[j])
				if (DP[i] < DP[j] + 1)
					DP[i] = DP[j] + 1;
	}

	int max = 0;
	for (int i = 0; i < N; i++)
		if (DP[i] > max)
			max = DP[i];

	std::cout << max;
	return 0;
}