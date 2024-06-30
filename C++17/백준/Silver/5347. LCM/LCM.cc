#include <iostream>

long long fGCD(long long a, long long b)
{
	if (a % b == 0)
		return b;
	else
		return fGCD(b, a % b);
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long T, A, B, GCD; std::cin >> T;

	while (T--)
	{
		std::cin >> A >> B;
		GCD = fGCD(A, B);
		std::cout << (A * B) / GCD << '\n';
	}

	return 0;
}