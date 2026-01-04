#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	double x1, y1, r1;
	double x2, y2, r2;

	std::cin >> x1 >> y1 >> r1;
	std::cin >> x2 >> y2 >> r2;

	double dist = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

	if (r1 + r2 > dist)
		std::cout << "YES";
	else
		std::cout << "NO";

	return 0;
}