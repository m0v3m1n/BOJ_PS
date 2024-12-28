#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, sum = 0; std::cin >> N;

	std::vector<int> V(N);
	for (int i = 0; i < N; i++) std::cin >> V[i];
	std::sort(V.begin(), V.end(), std::greater<int>());

	for (int i = 0; i < V.size(); i++)
		if ((i + 1) % 3 == 0)
			continue;
		else
			sum += V[i];

	std::cout << sum;
			
}