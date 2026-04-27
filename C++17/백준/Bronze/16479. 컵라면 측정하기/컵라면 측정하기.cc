#include <iostream>
#include <algorithm>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	double K, D1, D2;
	std::cin >> K >> D1 >> D2;

	double diff = (std::max(D1, D2) - std::min(D1, D2)) / 2.0;

	std::cout << std::fixed;
	std::cout.precision(6);
	std::cout << (K * K) - (diff * diff);

	return 0;
}