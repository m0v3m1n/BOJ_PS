#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long C, K;
	std::cin >> C >> K;

	if (K != 0)
	{
		K = std::pow(10, K);

		if (C % K >= K / 2)
			C += (K - C % K);
		else
			C -= C % K;
	}

	std::cout << C;
	return 0;
}