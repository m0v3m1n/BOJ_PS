#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long T, n, a, b, cnt;
	std::cin >> T;

	while (T--)
	{
		cnt = 0;
		std::cin >> n >> a >> b;

		long long value = std::pow(2, n);
		long long D = std::min(a, b); // 큰거든 작은거든 하나만 맞으면 됨

		while (value != D)
		{
			if (value == D)
			{
				std::cout << cnt;
				break;
			}
			else if (value < D)
				D -= value;

			value /= 2;
			cnt++;
		}

		std::cout << cnt << '\n';
	}
}