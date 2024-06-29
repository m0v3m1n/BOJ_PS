#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, diff, diff_sum = 0; std::cin >> N;
	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	for (int i = N - 1; i > 0; i--)
	{
		if (V[i - 1] >= V[i])
		{
			diff = (V[i - 1] - V[i]) + 1;
			V[i - 1] -= diff;
			diff_sum += diff;
		}
	}

	std::cout << diff_sum;
	return 0;
}