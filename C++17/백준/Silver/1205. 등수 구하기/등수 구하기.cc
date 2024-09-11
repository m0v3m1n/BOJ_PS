#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, score, P;
	int tmp_score, rank_diff = 1;
	std::cin >> N >> score >> P;

	if (N == 0)
		std::cout << 1;
	else
	{
		std::vector<std::pair<int, int>> V(N);

		std::cin >> V[0].first; V[0].second = 1;
		for (int i = 1; i < N; i++)
		{
			std::cin >> V[i].first;

			if (V[i].first == V[i - 1].first)
			{
				V[i].second = V[i - 1].second;
				rank_diff++;
			}
			else
			{
				V[i].second = V[i - 1].second + rank_diff;
				rank_diff = 1;
			}
		}

		if (N == P)
			if (V[N - 1].first >= score)
				std::cout << -1;
			else
			{
				for (int i = 0; i < N; i++)
					if (score >= V[i].first)
					{
						std::cout << V[i].second;
						break;
					}
			}

		else if (N > P) // 안주어짐
			return 0;

		else // N < P; 즉 여유가 있음.
			for (int i = 0; i < P; i++)
				if (i == N) // 끝까지 옴. --> 드가자잇
				{
					std::cout << N + 1;
					break;
				}
				else
					if (score >= V[i].first)
					{
						std::cout << V[i].second;
						break;
					}
	}

	return 0;
}