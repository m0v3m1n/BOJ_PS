#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, S, count = 0;
	std::cin >> N >> S;

	std::vector<int> V(N);
	std::vector<int> supportV(N);

	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			supportV[j] = 0;
		for (int j = 0; j < i; j++)
			supportV[j] = 1;
		std::sort(supportV.begin(), supportV.end());

		do
		{
			int sum = 0;
			for (int j = 0; j < N; j++)
				if (supportV[j] == 0)
					sum += V[j];

			if (sum == S)
			{
				//for (int j = 0; j < N; j++)
				//	if (supportV[j] == 0)
				//		std::cout << V[j] << ' ';
				//for (auto& K : supportV)
				//	std::cout << K << ' ';
				//std::cout << '\n';
				count++;
			}
		} while (std::next_permutation(supportV.begin(), supportV.end()));
	}

	std::cout << count;
	return 0;
}