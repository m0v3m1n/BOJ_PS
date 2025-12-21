#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, prev, cur = -1, cnt = 1;
	std::cin >> N;

	for (int i = 0; i < N; i++)
		if (i == 0)
			std::cin >> prev;
		else if (i < N)
		{
			std::cin >> cur;

			if (prev <= cur)
				cnt++;

			prev = cur;
		}
	
	std::cout << cnt;
}