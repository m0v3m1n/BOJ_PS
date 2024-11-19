#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int N, sum = 0; std::cin >> N;

	std::vector<std::pair<int, int>> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i].first >> V[i].second;

	for (int i = 0; i < N; i++)
	{
		if (V[i].second == 0)
			continue;
		else
		{
			V[i].first *= V[i].second;
			V[i].second -= 1;
		}

		sum += V[i].first;
	}

	std::cout << sum;

}