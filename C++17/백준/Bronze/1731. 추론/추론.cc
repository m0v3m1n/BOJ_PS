#include <iostream>
#include <vector>

int main()
{
	long long N; std::cin >> N;
	std::vector<long long> V(N);

	for (auto i = 0; i < N; i++)
		std::cin >> V[i];

	if (V[2] - V[1] == V[1] - V[0])
		std::cout << V[N - 1] + (V[1] - V[0]);
	else
		std::cout << V[N - 1] * (V[1] / V[0]);
}