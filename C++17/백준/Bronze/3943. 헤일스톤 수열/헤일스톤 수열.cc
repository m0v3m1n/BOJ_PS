#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, h, max;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> h;
		max = 1;

		while (h != 1)
		{
			if (h > max)
				max = h;

			if (h % 2 == 1)
				h = h * 3 + 1;
			else
				h /= 2;
		}

		std::cout << max << '\n';
	}

	return 0;
}