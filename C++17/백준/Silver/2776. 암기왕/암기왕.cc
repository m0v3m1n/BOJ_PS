#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N, M; std::cin >> T;
	while (T--)
	{
		std::cin >> N;
		std::vector<long long> V(N);
		for (int i = 0; i < N; i++)
			std::cin >> V[i];

		std::cin >> M;
		std::vector<long long> W(M);
		for (int ii = 0; ii < M; ii++)
			std::cin >> W[ii];

		std::sort(V.begin(), V.end());

		for (auto& K : W)
			if (std::binary_search(V.begin(), V.end(), K) == true)
				std::cout << 1 << '\n';
			else
				std::cout << 0 << '\n';
	}
	return 0;
}