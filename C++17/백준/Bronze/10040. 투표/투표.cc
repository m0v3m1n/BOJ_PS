#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M;
	std::cin >> N >> M;

	std::vector<int> gamesPay(N), judge(M), votes(N, 0);
	for (auto& K : gamesPay)
		std::cin >> K;
	for (auto& K : judge)
		std::cin >> K;

	for(int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			if (judge[i] >= gamesPay[j])
			{
				votes[j]++;
				break;
			}

	int maxIdx = 0;
	for (int i = 0; i < N; i++)
		if (votes[maxIdx] < votes[i])
			maxIdx = i;

	std::cout << maxIdx + 1;
	return 0;
}