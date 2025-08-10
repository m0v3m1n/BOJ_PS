#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;

	std::vector<std::vector<int>> V(N, std::vector<int>(N));
	std::vector<std::vector<bool>> access(N, std::vector<bool>(N, false));

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			std::cin >> V[i][j];

	access[0][0] = true;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (access[i][j] == true)
			{
				if (0 <= i - V[i][j] && i - V[i][j] < N)
					access[i - V[i][j]][j] = true;

				if (0 <= j - V[i][j] && j - V[i][j] < N)
					access[i][j - V[i][j]] = true;

				if (0 <= i + V[i][j] && i + V[i][j] < N)
					access[i + V[i][j]][j] = true;

				if (0 <= j + V[i][j] && j + V[i][j] < N)
					access[i][j + V[i][j]] = true;
			}

	if (access[N - 1][N - 1])
		std::cout << "HaruHaru";
	else
		std::cout << "Hing";

	return 0;
} 