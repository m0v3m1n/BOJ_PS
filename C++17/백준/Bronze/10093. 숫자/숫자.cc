#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long A, B;
	long long tmp;

	std::cin >> A >> B;
	if (A > B) // 무조건 B > A가 되도록.
	{
		tmp = B;
		B = A;
		A = tmp;
	}

	if (A == B)
		std::cout << 0;
	else
	{
		std::cout << (B - A) - 1 << '\n';
		for (long long i = A + 1; i < B; i++)
			std::cout << i << ' ';
	}

	return 0;
}