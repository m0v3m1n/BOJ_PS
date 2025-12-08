#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N; std::cin >> T;

	while (T--)
	{
		int tmp, cnt = 0;
		std::cin >> N;

		for (int i = 2; i <= N; i++)
		{
			tmp = N;

			while (tmp % i == 0)
			{
				cnt++;
				tmp /= i;
			}
		}

		std::cout << cnt << '\n';
	}

	return 0;
}