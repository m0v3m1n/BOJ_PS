#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int N, M; std::cin >> N >> M;
	std::vector<int> V(N); for (int i = 0; i < N; i++) std::cin >> V[i];

	int max, tmp, max_idx, count = 0;
	int last_idx = N - 1;

	for (int i = 0; i < N; i++)
	{
		max = 0; max_idx = 0;

		for (int j = last_idx; j >= 0; j--)
			if (V[j] > max)
			{
				max = V[j];
				max_idx = j;
			}
		
		if (max_idx != last_idx)
		{
			tmp = V[max_idx];
			V[max_idx] = V[last_idx];
			V[last_idx] = tmp;

			count++;
			if (count == M)
			{
				std::cout << V[max_idx] << ' ' << V[last_idx];
				return 0;
			}
		} last_idx--;
	}

	std::cout << -1;
}