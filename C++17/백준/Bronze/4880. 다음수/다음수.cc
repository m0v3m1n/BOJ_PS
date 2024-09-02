#include <iostream>

int main()
{
	int A, B, C;

	while (1)
	{
		std::cin >> A >> B >> C;

		if (!A && !B && !C)
			break;
		else
			if (B - A == C - B)
				std::cout << "AP" << ' ' << C + (B - A) << '\n';
			else
				std::cout << "GP" << ' ' << C * (B / A) << '\n';
	}
}