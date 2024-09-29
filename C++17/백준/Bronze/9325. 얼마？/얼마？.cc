#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int sum, T, S, N, opt1, opt2;
	std::cin >> T;

	while (T--)
	{
		sum = 0;

		std::cin >> S >> N;
		sum += S;

		for (int i = 0; i < N; i++)
		{
			std::cin >> opt1 >> opt2;
			sum += (opt1 * opt2);
		}

		std::cout << sum << '\n';
	}
}