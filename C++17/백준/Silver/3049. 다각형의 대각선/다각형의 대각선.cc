#include <iostream>
int main()
{
	int n, com = 1; std::cin >> n;
	if (n < 4)
		std::cout << 0;
	else if (n == 4)
		std::cout << 1;
	else
	{
		for (int i = n; i > n - 4; i--)
			com *= i;
		std::cout << com / 24;
	}
}