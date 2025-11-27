#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int X, Y, M, max = 0;

	std::cin >> X >> Y >> M;

	for (int i = 0; i <= M / X; i++)
		for (int j = 0; j <= M / Y; j++)
		{
			if (X * i + Y * j > M)
				break;
			else
				max = max > X * i + Y * j ? max : X * i + Y * j;
		}

	std::cout << max;
}