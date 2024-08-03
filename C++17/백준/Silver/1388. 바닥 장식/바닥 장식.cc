#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, count = 0; std::cin >> N >> M;

	char** tiles = new char* [N];
	bool** visit = new bool* [N];

	for (int i = 0; i < N; i++)
	{
		tiles[i] = new char[M];
		visit[i] = new bool[M];
	}
	// ------------------------
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			std::cin >> tiles[i][j];
			visit[i][j] = false;
		}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (!visit[i][j]) // If I didn't visit this tile, let's go;
			{
				if (tiles[i][j] == '-') // If it's horizontal;
				{
					for (int k = j; k < M; k++)
					{
						if (tiles[i][k] == '-')
							visit[i][k] = true;
						else
							break;
					}
				}
				else // If it's vertical;
				{
					for (int k = i; k < N; k++)
					{
						if (tiles[k][j] == '|')
							visit[k][j] = true;
						else
							break;
					}
				}
				count++; // I visited tile/tiles, so count will be increased.
			}

	std::cout << count;

	// ------------------------
	for (int i = 0; i < N; i++)
	{
		delete[] tiles[i];
		delete[] visit[i];
	}

	delete[] tiles;
	delete[] visit;
}