#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::vector<double> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	std::sort(V.begin(), V.end());

	std::cout << std::fixed;
	std::cout.precision(3);

	for (int i = 0; i < 7; i++)
		std::cout << V[i] << '\n';
}