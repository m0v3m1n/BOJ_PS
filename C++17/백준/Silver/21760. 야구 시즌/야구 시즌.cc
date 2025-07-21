#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int T; std::cin >> T;
	while (T--)
	{
		int N, M; std::cin >> N >> M; // 도합 N(지역수) * M(같은 지역 내 팀)
		int k, D; std::cin >> k >> D; // M개의 팀은 (M - 1) * (k + B) + (N - 1) * M * B번 경기를 진행해야 함.
		// std::cout << (N * M) * ((M - 1) * k + (N - 1) * M) / 2 << '\n';
		int determined = (N * M) * ((M - 1) * k + (N - 1) * M) / 2;

		if (determined > D)
			std::cout << -1 << '\n';
		else
			std::cout << (D / determined) * determined << '\n';
	}

	return 0;
}