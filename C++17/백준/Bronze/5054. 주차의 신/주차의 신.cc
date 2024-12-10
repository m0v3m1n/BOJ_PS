#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int T, N, sum; std::cin >> T;

	while (T--)
	{
		std::cin >> N;
		sum = 0;

		std::vector<int> V(N);
		for (int i = 0; i < N; i++)
			std::cin >> V[i];

		std::sort(V.begin(), V.end());

		for (int i = 1; i < V.size(); i++)
			sum += V[i] - V[i - 1];
		sum += (V[V.size() - 1] - V[0]);
		
		std::cout << sum << '\n';
	}
}