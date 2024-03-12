#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N, tmp; std::cin >> N;
	std::vector<std::pair<int, int>> V(N);
	std::vector<int> VV(N);

	for (int i = 0; i < N; i++)
	{
		std::cin >> V[i].first;
		V[i].second = i;
	}

	std::sort(V.begin(), V.end());

	for (int i = 0; i < N; i++)
		VV[V[i].second] = i;

	for (auto& K : VV)
		std::cout << K << ' ';

	return 0;
}