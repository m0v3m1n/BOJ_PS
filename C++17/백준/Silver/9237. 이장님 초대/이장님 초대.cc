#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	int max = 0;

	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	std::sort(V.begin(), V.end(), std::greater<int>());

	for (int i = 0; i < N; i++)
	{
		if (V[i] + (i + 2) > max)
			max = V[i] + (i + 2);
	}

	std::cout << max;
	return 0;
}