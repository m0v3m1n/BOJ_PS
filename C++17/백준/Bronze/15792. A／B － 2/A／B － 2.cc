#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int A, B; std::cin >> A >> B;

	std::cout << A / B << '.';
	A %= B;

	for (int i = 0; i <= 1000; i++)
	{
		A *= 10;
		std::cout << A / B;
		A %= B;
	}

	return 0;
}
