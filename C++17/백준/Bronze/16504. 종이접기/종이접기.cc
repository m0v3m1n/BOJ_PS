#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N, tmp, sum = 0;
	std::cin >> N;

	for(long long i = 0; i < N; i++)
		for (long long j = 0; j < N; j++)
		{
			std::cin >> tmp;
			sum += tmp;
		}

	std::cout << sum;
	return 0;
}