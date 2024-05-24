#include <iostream>

int main()
{
	int S_G[2][6];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 6; j++)
			S_G[i][j] = 0;

	int N, K, s, g, room = 0; std::cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		std::cin >> s >> g;
		S_G[s][g - 1]++;
	}

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 6; j++)
		{
			if (S_G[i][j] == 0)
				continue;

			room++;
			while (S_G[i][j] > K)
			{
				room++;
				S_G[i][j] -= K;
			}
		}

	std::cout << room;
	return 0;
}