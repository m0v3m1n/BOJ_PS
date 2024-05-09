#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long X, Y, win_rate, win, start, end, mid;
	std::cin >> X >> Y;

	win_rate = (Y * 100) / X;
	if (win_rate < 99)
	{
		start = X; end = 2 * X;

		while (start < end)
		{
			mid = (start + end) / 2;
			win = mid - X;

			if ((100 * (Y + win)) / mid < win_rate + 1)
				start = mid + 1;
			else
				end = mid;
		}
		std::cout << end - X;
	}
	else
		std::cout << -1;

	return 0;
}