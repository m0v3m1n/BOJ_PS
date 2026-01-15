#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N, M;
	std::cin >> T;
	
	while (T--)
	{
		std::cin >> N >> M;

		if (N < 12 || M < 4) // L은 12번째 알파벳, 
			std::cout << -1 << '\n';
		else
			std::cout << (11 * M) + 4 << '\n';
	}

	return 0;
}