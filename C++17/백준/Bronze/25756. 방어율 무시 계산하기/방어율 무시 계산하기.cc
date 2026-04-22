#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	double bangMu = 0.0, potion;

	for (int i = 0; i < N; i++)
	{
		std::cin >> potion;
		bangMu = 1 - (1 - bangMu) * (1 - potion / 100);

		std::cout << std::fixed;
		std::cout.precision(6);
		std::cout << bangMu * 100 << '\n';
	}
	return 0;
}