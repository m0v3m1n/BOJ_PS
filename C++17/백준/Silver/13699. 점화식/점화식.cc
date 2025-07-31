#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::vector<long long> V(36, 0);
	V[0] = 1;

	// i = 1, j = 0 ==> 1 += 0 * (1 - 0 - 1) = 0 * 0
	// 
	// i = 2, j = 0 ==> 2 += 0 * (2 - 0 - 1) = 0 * 1
	// i = 2, j = 1 ==> 2 += 1 * (2 - 1 - 1) = 1 * 0
	// 
	// i = 3, j = 0 ==? 3 += 0 * (3 - 0 - 1) = 0 * 2
	// i = 3, j = 1 ==? 3 += 1 * (3 - 1 - 1) = 1 * 1
	// i = 3, j = 2 ==? 3 += 2 * (3 - 2 - 1) = 2 * 0
	// 
	// i = 4, j = 0 ==? 4 += 0 * (4 - 0 - 1) = 0 * 0
	// i = 4, j = 1 ==? 4 += 1 * (4 - 1 - 1) = 1 * 2
	// i = 4, j = 2 ==? 4 += 2 * (4 - 2 - 1) = 2 * 1
	// i = 4, j = 3 ==? 4 += 3 * (4 - 3 - 1) = 3 * 0

	for (long long i = 1; i <= 35; i++)
	{
		for (long long j = 0; j < i; j++)
			V[i] += V[0 + j] * V[i - j - 1];
	}

	//for (auto& K : V)
	//	std::cout << K << '\n';

	long long N; std::cin >> N;
	std::cout << V[N];

	return 0;
}