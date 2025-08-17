#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, tmp, count = 1, max_idx = 1; std::cin >> N;

	std::vector<int> V(N + 1, 0);
	for (int i = 1; i <= N; i++)
	{
		std::cin >> tmp;
		V[tmp]++;
	}

	for (int i = 2; i <= N; i++)
		if (V[max_idx] < V[i])
		{
			max_idx = i;
			count = 1;
		}
		else if (V[max_idx] == V[i])
			count++;

	if (count > 1)
		std::cout << "skipped";
	else
		std::cout << max_idx;

	return 0;
} 