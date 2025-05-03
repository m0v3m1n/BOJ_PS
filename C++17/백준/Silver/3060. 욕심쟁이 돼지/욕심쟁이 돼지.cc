#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int arr[6][3] = { {6, 2, 4}, {1, 3, 5}, {2, 4, 6}, {3, 5, 1}, {4, 6, 2}, {5, 1, 3} };
	int cur_feed[6], next_feed[6];

	int T, N, feed, day;
	std::cin >> T;

	while (T--)
	{
		std::cin >> N;
		for (int i = 0; i < 6; i++)
			std::cin >> cur_feed[i];

		day = 1;

		while (1)
		{
			feed = N;

			for (int i = 0; i < 6; i++)
				next_feed[i] = 0;

			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 3; j++)
					next_feed[i] += cur_feed[arr[i][j] - 1];

				next_feed[i] += cur_feed[i];
				feed -= cur_feed[i];
			}

			for (int i = 0; i < 6; i++)
				cur_feed[i] = next_feed[i];

			if (feed >= 0)
				day++;
			else
				break;
		}

		std::cout << day << '\n';
	}

	return 0;
}