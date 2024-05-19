#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 999999
int DP[10001];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N, K; std::cin >> N >> K;

	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];
	for (int i = 0; i <= K; i++)
		DP[i] = MAX;

	std::sort(V.begin(), V.end());
	V.erase(std::unique(V.begin(), V.end()), V.end());

	for (int i = 0; i < V.size(); i++)
	{
		for (int j = V[i]; j <= K; j++)
			if (j % V[i] == 0) // 나누어떨어지면?
				DP[j] = std::min((j / V[i]), DP[j]); // 기존 vs 새거
			else // 안나누어떨어지면?
			{
				if (DP[j - V[i]] != MAX) // 기존에 값이 있었으면
					DP[j] = std::min(DP[j - V[i]] + 1, DP[j]);
				else // 기존에 값이 없었다면?
					continue; // 나가리
			}
	}

	if (DP[K] == MAX)
		std::cout << -1;
	else
		std::cout << DP[K];
	return 0;
}