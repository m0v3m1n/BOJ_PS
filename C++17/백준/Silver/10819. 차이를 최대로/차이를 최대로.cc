#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, max = 0; std::cin >> N;
	std::vector<int> V(N);
	std::vector<int> permutation(N);

	for (int i = 0; i < N; i++)
	{
		std::cin >> V[i];
		permutation[i] = i;
	}

	do
	{
		int sum = 0;

		for(int i = 0; i < N - 1; i++)
			sum += std::abs(V[permutation[i]] - V[permutation[i + 1]]);

		// permutation은 0, 1, 2 / 0, 2, 1, / ... / 2, 1, 0 등 순열이 기록됨
		// 즉, 가능한 모든 순서가 permutation에 기록됨
		// 그러므로, permutation[i]에 기록된 idx로 V 배열에 접근하면 순서를 뒤섞은 것과 같음

		if (sum > max)
			max = sum;
	} while (std::next_permutation(permutation.begin(), permutation.end()));

	std::cout << max;
	return 0;
}