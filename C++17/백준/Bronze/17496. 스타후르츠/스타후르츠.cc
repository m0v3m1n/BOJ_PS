#include <iostream>

int main()
{
	long long N, T, C, P, sum = 0;
	std::cin >> N >> T >> C >> P;

	for (long long i = 1; i <= N; i += T)
		if (i != 1)
			sum += C * P;

	std::cout << sum;
}