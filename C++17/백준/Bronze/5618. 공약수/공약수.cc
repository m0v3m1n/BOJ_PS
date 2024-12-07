#include <iostream>

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

int main()
{
	int N, gcd; std::cin >> N;

	if (N == 2)
	{
		int a, b; std::cin >> a >> b;
		gcd = GCD(a, b);
	}
	else
	{
		int a, b, c; std::cin >> a >> b >> c;
		gcd = GCD(a, GCD(b, c));
	}

	for (int i = 1; i <= gcd; i++)
		if (gcd % i == 0)
			std::cout << i << '\n';
}