#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, max = 0;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::vector<int> run(2);
		std::vector<int> trick(5);

		for (int j = 0; j < 2; j++)
			std::cin >> run[j];
		for (int j = 0; j < 5; j++)
			std::cin >> trick[j];

		std::sort(run.begin(), run.end(), std::greater<int>());
		std::sort(trick.begin(), trick.end(), std::greater<int>());

		max = max > (run[0] + trick[0] + trick[1]) ? max : (run[0] + trick[0] + trick[1]);
	}

	std::cout << max;
	return 0;
}