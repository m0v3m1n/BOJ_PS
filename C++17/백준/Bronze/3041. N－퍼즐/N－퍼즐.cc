#include <iostream>
#include <cmath>

int main()
{
	std::pair<char, std::pair<int, int>> alp[15];
	char tmp; int sum = 0;

	for (int i = 0; i < 15; i++)
		alp[i] = { i + 'A', std::make_pair<int, int>(i / 4, i % 4)};

	//for (auto& K : alp)
	//	std::cout << K.first << ' ' << K.second.first << ' ' << K.second.second << '\n';

	for (int i = 0; i < 16; i++)
	{
		std::cin >> tmp;

		if (tmp == '.')
			continue;

		sum += std::abs(alp[tmp - 'A'].second.first - (i / 4))
			+ std::abs(alp[tmp - 'A'].second.second - (i % 4));
	}

	std::cout << sum;
	return 0;
}