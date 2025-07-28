#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T;
	std::cin >> T;

	while (T--)
	{
		int N, C;
		std::cin >> N >> C;
		std::cout << (N / C) + (N % C == 0 ? 0 : 1) << '\n';
	}

	return 0;
} 