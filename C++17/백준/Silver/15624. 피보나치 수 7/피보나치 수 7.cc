#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, pp, p, cur = 0; std::cin >> N;
	if (N == 0)
		std::cout << 0;
	else if (N == 1)
		std::cout << 1;
	else
	{
		pp = 0;
		p = 1;
		
		for (int i = 2; i <= N; i++)
		{
			cur = pp % 1000000007 + p % 1000000007;
			cur %= 1000000007;

			pp = p;
			p = cur;
		}

		std::cout << cur;
	}
	return 0;
}