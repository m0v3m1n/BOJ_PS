#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::cout << "n e" << '\n';
	std::cout << "- -----------" << '\n';
	double sum = 0;
	for (int i = 0; i < 10; i++)
	{
		double tmp = 1;
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
				tmp *= 1;
			else
				tmp *= j;
		}
		sum += (1.0 / tmp);

		if (i == 0)
			std::cout << "0 1" << '\n';
		else if (i == 1)
			std::cout << "1 2" << '\n';
		else if (i == 2)
			std::cout << "2 2.5" << '\n';
		else
		{
			std::cout << i << ' ';
			std::cout << std::fixed;
			std::cout.precision(9);
			std::cout << sum << '\n';
		}
	}
	return 0;
}