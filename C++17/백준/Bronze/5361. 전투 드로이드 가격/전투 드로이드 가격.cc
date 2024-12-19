#include <iostream>

int main()
{
	int T; std::cin >> T;
	while (T--)
	{
		double sum = 0;
		double br, vs, as, a, l; std::cin >> br >> vs >> as >> a >> l;

		sum += br * 350.34;
		sum += vs * 230.90;
		sum += as * 190.55;
		sum += a * 125.30;
		sum += l * 180.90;

		std::cout << "$";
		std::cout << std::fixed;
		std::cout.precision(2);
		std::cout << sum << '\n';
	}
}