#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N, K, tmp, total = 0;; std::cin >> T;
	while (T--)
	{
		std::cin >> N >> K;
		for (int i = 0; i < N; i++)
		{
			std::cin >> tmp;
			total += tmp / K;
		}
		std::cout << total << '\n';
		total = 0;
	}
	return 0;
}