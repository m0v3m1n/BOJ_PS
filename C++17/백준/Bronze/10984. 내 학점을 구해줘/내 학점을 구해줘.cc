#include <iostream>

int main()
{
	int T, N, hak, hak_sum;
	float pyung, pyung_sum;

	std::cin >> T;

	while (T--)
	{
		std::cin >> N;

		hak_sum = 0;
		pyung_sum = 0;

		for (int i = 0; i < N; i++)
		{
			std::cin >> hak >> pyung;
			hak_sum += hak;
			pyung_sum += pyung * (float) hak;
		}
		
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << hak_sum << ' ' << pyung_sum / (float) hak_sum << '\n';
	}

	return 0;
}