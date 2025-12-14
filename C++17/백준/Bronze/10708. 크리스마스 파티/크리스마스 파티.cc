#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M;
	std::cin >> N >> M;

	std::vector<int> scores(N);
	std::vector<int> gameTarget(M);
	std::vector<std::vector<int>> games(M, std::vector<int>(N));

	for (auto& K : gameTarget)
		std::cin >> K;

	for (auto& K : games)
		for (auto& L : K)
			std::cin >> L;

	for (int i = 0; i < M; i++)
	{
		int wrongGuys = 0;

		for (int j = 0; j < N; j++)
		{
			if (games[i][j] == gameTarget[i]) // i번째 게임에서 j번째 사람이 고른 사람이 i번째 게임의 타겟이라면
				scores[j]++;
			else
				wrongGuys++;
		}

		scores[gameTarget[i] - 1] += wrongGuys; // 틀린 사람만큼 점수 추가, 이때 index이므로 1 줄인 값으로 접근
	}

	for (auto& K : scores)
		std::cout << K << '\n';
	return 0;
}