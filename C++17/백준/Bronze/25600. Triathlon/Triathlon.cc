#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, a, d, g, max = 0; std::cin >> N;
	while (N--)
	{
		std::cin >> a >> d >> g;

		if (a == d + g)
			max = max > (a * (d + g) * 2) ? max : (a * (d + g) * 2);
		else
			max = max > (a * (d + g)) ? max : (a * (d + g));
	}

	std::cout << max;
}