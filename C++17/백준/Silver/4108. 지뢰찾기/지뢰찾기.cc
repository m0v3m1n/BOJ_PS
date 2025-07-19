#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int R, C;
	std::string mapping;

	while (1)
	{
		std::cin >> R >> C;
		if (!R && !C)
			break;

		int** map = new int* [R];
		for (int i = 0; i < R; i++)
			map[i] = new int[C];

		for (int i = 0; i < R; i++)
			for (int j = 0; j < C; j++)
				map[i][j] = 0;

		for (int i = 0; i < R; i++)
		{
			std::cin >> mapping;
			for (int j = 0; j < mapping.length(); j++) // == j < C;
				if (mapping[j] == '.')
					continue;
				else // == '*'
				{
					map[i][j] = -1;

					for(int k = -1; k <= 1; k++)
						for (int l = -1; l <= 1; l++)
							if (0 <= (i + k) && (i + k) < R && 0 <= (j + l) && (j + l) < C) // map 범위 안일 때에만 실행
								if (map[i + k][j + l] == -1) // 지뢰면
									continue;
								else
									map[i + k][j + l]++;
				}
		}

		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
				if (map[i][j] == -1)
					std::cout << '*';
				else
					std::cout << map[i][j];
			std::cout << '\n';
		}

		for (int i = 0; i < R; i++)
			delete[] map[i];
		delete[] map;
	}
	return 0;
}