#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int A, B, C, D, E; std::cin >> A >> B >> C >> D >> E;

	if (A >= 0)
		std::cout << (B - A) * E;
	else
		std::cout << (A * -1 * C) + D + (B * E);

	return 0;
}