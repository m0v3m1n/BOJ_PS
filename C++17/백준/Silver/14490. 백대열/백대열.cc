#pragma warning(disable:4996)

#include <iostream>
#include <string>

int GCD(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}

int main()
{
	int A, B;
	std::scanf("%d:%d", &A, &B);

	int gcd = GCD(A, B);
	std::printf("%d:%d", A / gcd, B / gcd);

	return 0;
}