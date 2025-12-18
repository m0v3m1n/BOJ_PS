#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, min = 999999999;
	int minSurface[3] = { 0, 0, 0 };

	std::cin >> N;

	for (int i = 1; i * i * i <= N; i++)
		if (N % i == 0)
			for (int j = 1; j * j <= (N / i); j++)
				if ((N / i) % j == 0)
				{
					int k = (N / i) / j;
					int surface = (2 * i * j) + (2 * j * k) + (2 * k * i);

					if (surface < min)
					{
						minSurface[0] = i;
						minSurface[1] = j;
						minSurface[2] = k;

						min = surface;
					}
				}

	for (int i = 0; i < 3; i++)
		std::cout << minSurface[i] << ' ';
	return 0;
}