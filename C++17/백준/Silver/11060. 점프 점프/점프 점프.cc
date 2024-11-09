#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::vector<int> dist(N);
	std::vector<int> jump(N, INT_MAX - 10000000);

	for (int i = 0; i < N; i++)
		std::cin >> dist[i];

	jump[0] = 0;
	for (int i = 0; i < N; i++)
	{
		if (jump[i] == INT_MAX)
			continue;
		for (int j = 1; j <= dist[i]; j++)
		{
			if (i + j >= N)
				continue;
			if (jump[i + j] > jump[i] + 1)
				jump[i + j] = jump[i] + 1;
		}
	}

	if (jump[N - 1] == INT_MAX - 10000000)
		std::cout << -1;
	else
		std::cout << jump[N - 1];
}