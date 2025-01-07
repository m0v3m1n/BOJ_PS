#include <iostream>

int main()
{
	int T, N, M; std::cin >> T;
	while (T--)
	{
		std::cin >> N >> M;
		std::cout << 2 * M - N << ' ' << M - (2 * M - N) << '\n';
	}
}