#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, max = 0;
	std::cin >> N;

	std::vector<int> DP(N + 2, 0);
	std::vector<std::pair<int, int>> TP(N + 1);

	for (int i = 1; i <= N; i++)
		std::cin >> TP[i].first >> TP[i].second;

	for (int i = 1; i <= N + 1; i++)
	{
		max = max > DP[i] ? max : DP[i];

		if (i == N + 1)
			break;

		if (i + TP[i].first <= N + 1) // N + 1일을 넘기지 않는다는 전제 하에
			DP[i + TP[i].first] = std::max(DP[i + TP[i].first], max + TP[i].second);
	}

	std::cout << max;
	return 0;
}