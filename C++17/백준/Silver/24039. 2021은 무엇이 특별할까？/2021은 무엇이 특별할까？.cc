#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N; std::cin >> N;
	bool prime[10001] = { false, };

	std::vector<int> primes;
	std::vector<int> prime_sums;

	for (int i = 2; i < 10001; i++)
		if (prime[i] == false) // 소수면?
		{
			for (int j = i + i; j < 10001; j += i)
				prime[j] = true; // 배수 싸그리 소수 X 판정.

			primes.push_back(i);
		}

	for (int i = 0; i < primes.size() - 1; i++)
		prime_sums.push_back(primes[i] * primes[i + 1]);

	std::cout << prime_sums[std::upper_bound(prime_sums.begin(), prime_sums.end(), N) - prime_sums.begin()];
	
	return 0;
}