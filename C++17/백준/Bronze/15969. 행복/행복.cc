#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N; std::cin >> N;
	std::vector<int> V(N);

	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	std::sort(V.begin(), V.end());

	std::cout << V[N - 1] - V[0];
}