#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	double R, G, B;
	double r, g, b, k, c, m, y;

	std::cin >> R >> G >> B;
	r = R / 255.0;
	g = G / 255.0;
	b = B / 255.0;

	double tmp = std::max(r, std::max(g, b));
	k = 1 - tmp;
	if (tmp < 1e-9)
	{
		c = 0;
		m = 0;
		y = 0;
	}
	else
	{
		c = (1.0 - r - k) / (1.0 - k);
		m = (1.0 - g - k) / (1.0 - k);
		y = (1.0 - b - k) / (1.0 - k);
	}

	std::cout << std::fixed;
	std::cout.precision(4);

	std::cout << c << ' ' << m << ' ' << y << ' ' << k;
	return 0;
}