#include <iostream>

int main()
{
	int T, a, b; std::cin >> T;
	for (int i = 1; i <= T; i++)
	{
		std::cin >> a >> b;
		std::cout << "Case " << i << ": " << a + b << '\n';
	}
}