#include <iostream>

int SEQ[1001];
std::pair<int, int> DP[1001];
// first = 길이, second = 더한 값

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
		if (DP[i].first == 0)
		{
			DP[i].first = 1;
			DP[i].second = SEQ[i];
		}

		for (int j = 0; j < i; j++)
			if (SEQ[i] > SEQ[j])
				if (DP[i].second < DP[j].second + SEQ[i])
				{
					DP[i].first = DP[j].first + 1;
					DP[i].second = DP[j].second + SEQ[i];
				}
	}

	int max = 0;
	for (int i = 0; i < N; i++)
	{
		if (DP[i].second > max)
			max = DP[i].second;
		// std::cout << i << "번째 : " << DP[i].first << ", 값 : " << DP[i].second << '\n';
	}

	std::cout << max;
	return 0;
}