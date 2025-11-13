#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int tSum = 0;
	int pSum = 0;
	std::vector<std::pair<int, int>> V(11);

	for (int i = 0; i < 11; i++)
		std::cin >> V[i].first >> V[i].second;

	std::sort(V.begin(), V.end());

	for (auto& K : V)
	{
		tSum += K.first;
		pSum += tSum + K.second * 20;
	}

	std::cout << pSum;
	return 0;
}