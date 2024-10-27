#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

void prime(long long N)
{
	bool flag = true;
	long long pr = N;

	while (flag)
	{
		for (int i = 2; i <= (long long)std::sqrt(pr); i++)
			if (pr % i == 0)
			{
				flag = false;
				break;
			}

		if (!flag) // 소수였으면? --> 빠꾸.
			flag = true;
		else
		{
			std::cout << pr << '\n';
			return;
		}

		pr++;
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;

	while (T--)
	{
		long long N; std::cin >> N;
		if (N < 2)
			std::cout << 2 << '\n';
		else
			prime(N);
	}
}