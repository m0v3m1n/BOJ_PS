#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;

	while (T--)
	{
		int N, D, cnt = 0;
		double V, F, C;
		std::cin >> N >> D;
		
		for (int i = 0; i < N; i++)
		{
			std::cin >> V >> F >> C;

			if (V * (F / C) >= D)
				cnt++;
		}

		std::cout << cnt << '\n';
	}

	return 0;
}