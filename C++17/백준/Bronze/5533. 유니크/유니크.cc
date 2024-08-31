#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, a, b, c; std::cin >> N;

	std::vector<int> score_per_person(N, 0);
	std::vector<std::vector<int>> person(N, std::vector<int>(3));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < 3; j++)
			std::cin >> person[i][j];


	for (int i = 0; i < 3; i++)
	{
		std::vector<std::vector<int>> score(101);

		for (int j = 0; j < N; j++)
			score[person[j][i]].push_back(j);

		for (int j = 0; j <= 100; j++)
			if (score[j].size() == 1)
				score_per_person[score[j][0]] += j;
	}

	for (auto& K : score_per_person)
		std::cout << K << '\n';
}