#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<int, int> A, std::pair<int, int> B)
{
	return A.second < B.second;
}

int main()
{
	int N, L, K; std::cin >> N >> L >> K;

	int score = 0;
	int solved = 0;

	std::vector<std::pair<int, int>> V(N);
	std::vector<bool> cleared(N, false);

	for (int i = 0; i < N; i++)
		std::cin >> V[i].first >> V[i].second;

	std::sort(V.begin(), V.end(), cmp); // 어려운 문제의 난이도순으로 정렬.

	for (int i = 0; i < N; i++)
	{
		if (solved < K && !cleared[i] && L >= V[i].second) // 어려운 문제 다 풀어보고
		{ // 아직 풀 수 있음 & 아직 못 푼 문제 & 풀 수 있는 문제
				score += 140;
				solved++;
				cleared[i] = true;
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (solved < K && !cleared[i] && L >= V[i].first) // 쉬운 문제 품.
		{ // 아직 풀 수 있음 & 아직 못 푼 문제 & 풀 수 있는 문제
			score += 100;
			solved++;
			cleared[i] = true;
		}
	}

	std::cout << score;
}