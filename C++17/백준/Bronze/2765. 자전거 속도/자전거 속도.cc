#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N = 1;
	double r2, rotate, hour;

	while (N)
	{
		std::cin >> r2 >> rotate >> hour;
		if (rotate == 0)
			break;

		std::cout << "Trip #" << N << ": ";
		double distance = r2 * 3.1415927 * rotate;

		distance *= 100;
		distance = std::floor(distance + 0.5);
		distance /= 100;

		std::cout << std::fixed;
		std::cout.precision(2);
		std::cout << distance / (5280 * 12) << ' ' << (distance / (5280 * 12)) / (hour / 3600) << '\n';

		N++;
	}

	return 0;
}