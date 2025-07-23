#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int N, K, max = -2000000000; std::cin >> N >> K;

	std::vector<int> V(N + 1, 0);
	for (int i = 1; i <= N; i++)
	{
		std::cin >> V[i];
		V[i] += V[i - 1]; // Prefix Sum
	}

	for (int i = K; i <= N; i++)
		if (max < V[i] - V[i - K])
			max = V[i] - V[i - K];

	std::cout << max;
	return 0;
}