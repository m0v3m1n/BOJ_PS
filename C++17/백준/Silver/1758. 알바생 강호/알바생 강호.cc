#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(long long A, long long B)
{
	return A > B;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N, sum = 0, dec = 0; std::cin >> N;
	std::vector<long long> V(N);

	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	std::sort(V.begin(), V.end(), cmp);

	for (auto& K : V)
		if(K - dec > 0)
			sum += (K - dec++);

	std::cout << sum;
	return 0;
}