#include <iostream>
#include <vector>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);

	int N, M, closer = 999999999; std::cin >> N >> M;
	std::vector<int> V(N);

	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	for (int i = 0; i < N - 2; i++)
		for (int j = i + 1; j < N - 1; j++)
			for (int k = j + 1; k < N; k++)
				if (std::abs(M - (V[i] + V[j] + V[k])) < std::abs(M - closer)
					&& (V[i] + V[j] + V[k]) <= M)
					closer = (V[i] + V[j] + V[k]);

	std::cout << closer;
	return 0;
}