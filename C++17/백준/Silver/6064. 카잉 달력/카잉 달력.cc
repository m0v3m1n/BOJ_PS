#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;
	while (T--)
	{
		int M, N, x, y, flag = 0;
		std::cin >> M >> N >> x >> y;

		// year가 있다면, year % M = x, year % N = y.
		std::vector<int> Vm;
		for (int i = x; i <= M * N; i += M)
			Vm.push_back(i);
		for (int i = y; i <= M * N; i += N)
		{
			if (std::binary_search(Vm.begin(), Vm.end(), i))
			{
				std::cout << i << '\n';
				flag = 1;
				break;
			}
			if (flag == 1)
				break;
		}
		if (flag == 0)
			std::cout << -1 << '\n';
	}
	return 0;
}