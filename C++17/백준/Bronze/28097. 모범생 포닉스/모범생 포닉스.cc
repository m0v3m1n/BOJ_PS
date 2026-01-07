#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, tmp, sum = 0;
	std::cin >> N;

	while (N--)
	{
		std::cin >> tmp;

		sum += tmp;
		sum += 8;
	} sum -= 8;

	std::cout << sum / 24 << ' ' << sum % 24;
	return 0;
}