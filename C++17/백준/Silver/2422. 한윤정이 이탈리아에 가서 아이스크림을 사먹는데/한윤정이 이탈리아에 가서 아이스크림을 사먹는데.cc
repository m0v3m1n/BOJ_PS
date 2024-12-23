#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, A, B, sum = 0; std::cin >> N >> M;

	std::vector<std::vector<bool>> V(N + 1, std::vector<bool>(N + 1, true));
	for (int i = 0; i < M; i++)
	{
		std::cin >> A >> B;
		V[A][B] = false;
		V[B][A] = false;
	}

	for(int i = 1; i <= N - 2; i++)
		for(int j = i + 1; j <= N - 1; j++)
			for (int k = j + 1; k <= N; k++)
				if (V[i][j] && V[j][k] && V[i][k])
					sum++;

	std::cout << sum;
}