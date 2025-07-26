#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, S, count = 0; std::cin >> N >> S;
	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	std::sort(V.begin(), V.end());

	for(int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++)
		{
			if (V[i] + V[j] > S)
				break;
			else
				count++;
		}

	std::cout << count;
	return 0;
} 