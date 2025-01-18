#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N; std::cin >> N;
	std::vector<long long> F(N + 1, 1);

	for (long long i = 3; i <= N; i++)
		F[i] = F[i - 1] + F[i - 3];

	std::cout << F[N - 1];
}