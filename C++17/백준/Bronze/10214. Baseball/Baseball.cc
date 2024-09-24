#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;

	while (T--)
	{
		int ys = 0, gs = 0;
		int y, g;

		for (int i = 0; i < 9; i++)
		{
			std::cin >> y >> g;
			ys += y; gs += g;
		}

		if (ys > gs)
			std::cout << "Yonsei" << '\n';
		else if (ys == gs)
			std::cout << "Draw" << '\n';
		else
			std::cout << "Korea" << '\n';
	}

	return 0;
}