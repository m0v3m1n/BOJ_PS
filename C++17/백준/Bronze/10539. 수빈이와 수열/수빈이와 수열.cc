#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int N, tmp, sum = 0;

	std::cin >> N;
	std::vector<int> V;

	for (int i = 1; i <= N; i++)
	{
		std::cin >> tmp;

		if (i != 1)
		{
			tmp *= i;
			tmp -= sum;
		}

		V.push_back(tmp);
		sum += tmp;
	}

	for (auto& K : V)
		std::cout << K << ' ';
}