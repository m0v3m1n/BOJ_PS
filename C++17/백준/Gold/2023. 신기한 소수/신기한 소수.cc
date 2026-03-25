#include <iostream>

bool isPrime(int p)
{
	if (p < 2)
		return false;

	for (int i = 2; i * i <= p; i++)
		if (p % i == 0)
			return false;

	return true;
}

void amazingPrimeFinding(int P, int depth, int N)
{
	if (depth == N)
	{
		std::cout << P << '\n';
		return;
	}

	int arr[4] = { 1, 3, 7, 9 };

	for (int i = 0; i < 4; i++)
	{
		int candidate = P * 10 + arr[i];

		if (isPrime(candidate))
			amazingPrimeFinding(candidate, depth + 1, N);
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::cin >> N;

	amazingPrimeFinding(2, 1, N);
	amazingPrimeFinding(3, 1, N);
	amazingPrimeFinding(5, 1, N);
	amazingPrimeFinding(7, 1, N);

	return 0;
}