#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, X, count = 0; std::cin >> N;

	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];
	std::cin >> X;

	std::sort(V.begin(), V.end());

	int idx_1 = 0, idx_2 = V.size() - 1;
		
	while (idx_1 != idx_2)
	{
		if (V[idx_1] + V[idx_2] > X)
			idx_2--;
		else if (V[idx_1] + V[idx_2] < X)
			idx_1++;
		else
		{
			count++;
			idx_1++;
		}
	}

	std::cout << count;
}