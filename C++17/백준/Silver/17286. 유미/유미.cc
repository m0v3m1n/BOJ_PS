#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::vector<std::pair<double, double>> points(4);
	double min = 1000000;

	for (int i = 0; i < 4; i++)
		std::cin >> points[i].first >> points[i].second; 

	for(int i = 1; i <= 3; i++)
		for(int j = 1; j <= 3; j++)
			for (int k = 1; k <= 3; k++)
			{
				double f, s, t;

				if (i != j && j != k && i != k)
				{
					f = std::sqrt(std::pow(points[0].first - points[i].first, 2) + std::pow(points[0].second - points[i].second, 2));
					s = std::sqrt(std::pow(points[i].first - points[j].first, 2) + std::pow(points[i].second - points[j].second, 2));
					t = std::sqrt(std::pow(points[j].first - points[k].first, 2) + std::pow(points[j].second - points[k].second, 2));

					if (f + s + t < min)
						min = f + s + t;
				}
			}

	std::cout << (int)min;
	return 0;
}