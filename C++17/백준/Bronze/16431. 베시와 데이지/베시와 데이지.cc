#include <iostream>
#include <algorithm>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::pair<int, int> B, D, J;
	int B_dist = 0, D_dist = 0;

	std::cin >> B.first >> B.second >> D.first >> D.second >> J.first >> J.second;
	int diagonal = std::min(std::abs(J.first - B.first), std::abs(J.second - B.second));

	B_dist = diagonal + (std::max(std::abs(J.first - B.first), std::abs(J.second - B.second)) - diagonal);
	D_dist = std::abs(J.first - D.first) + std::abs(J.second - D.second);

	if (B_dist == D_dist)
		std::cout << "tie";
	else if (B_dist < D_dist)
		std::cout << "bessie";
	else
		std::cout << "daisy";

	return 0;
}