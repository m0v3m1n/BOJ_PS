#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, height, width, X, Y, C;

	std::cin >> N >> C;
	width = height = N;

	for (int i = 0; i < C; i++)
	{
		std::cin >> X >> Y;

		if (X >= height || Y >= width)
			continue;

		if (X * width >= Y * height)
			height = X;
		else
			width = Y;
	}

	std::cout << height * width;
	return 0;
}