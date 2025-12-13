#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	while (1)
	{
		int A, B;
		std::cin >> A >> B;

		if (!A && !B)
			break;

		// C, A, B 순서
		// (A + B + C) / 3 = A를 만족하는 C를 찾아야 함.
		// C = 3A - A - B --> C = 2A - B

		std::cout << (2 * A) - B << '\n';
	}
	return 0;
}