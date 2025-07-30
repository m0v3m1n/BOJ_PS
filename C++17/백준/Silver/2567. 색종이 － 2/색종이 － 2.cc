#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, x, y, perimeter = 0; std::cin >> N;
	bool map[100][100] = { false, };

	while (N--)
	{
		std::cin >> x >> y;

		for (int i = x; i < x + 10; i++)
			for (int j = y; j < y + 10; j++)
				map[i][j] = true;
	}

	for(int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
		{
			if (map[i][j])
				if (i == 0)
					perimeter++;
				else if (i == 99)
					perimeter++;
				else if (!map[i - 1][j])
					perimeter++;
				else if (!map[i + 1][j])
					perimeter++;

			if (map[i][j])
				if (j == 0)
					perimeter++;
				else if (j == 99)
					perimeter++;
				else if (!map[i][j - 1])
					perimeter++;
				else if (!map[i][j + 1])
					perimeter++;
		}

	std::cout << perimeter;
	return 0;
}