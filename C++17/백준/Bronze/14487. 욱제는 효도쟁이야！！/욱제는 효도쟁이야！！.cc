#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, max = 0, sum = 0;
	std::cin >> N;

	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
	{
		std::cin >> V[i];
		sum += V[i];

		if (V[max] < V[i])
			max = i;
	}

	std::cout << sum - V[max];

	return 0;
}