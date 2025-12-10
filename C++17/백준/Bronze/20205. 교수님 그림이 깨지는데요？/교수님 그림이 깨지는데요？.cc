#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, K; std::cin >> N >> K;
	std::vector<std::vector<int>> V(N, std::vector<int>(N));

	for (auto& K : V)
		for (auto& L : K)
			std::cin >> L;

	for (int r = 0; r < N; r++)
		for (int rInc = 0; rInc < K; rInc++)
		{
			for (int c = 0; c < N; c++)
				for (int cInc = 0; cInc < K; cInc++)
					std::cout << V[r][c] << ' ';
			std::cout << '\n';
		}
	return 0;
}