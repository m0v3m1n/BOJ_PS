#include <iostream>

int main()
{
	int N; std::cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int a, b, c;
		std::cin >> a >> b >> c;

		a *= a; b *= b; c *= c;

		std::cout << "Scenario #" << i << ":\n";
		if (a == b + c || b == a + c || c == a + b)
			std::cout << "yes\n\n";
		else
			std::cout << "no\n\n";
	}
}