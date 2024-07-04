#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N, M, cA, cB;
	std::cin >> T;

	while (T--)
	{
		std::cin >> N >> M;

		for (int i = 0; i < M; i++)
			std::cin >> cA >> cB;

		std::cout << N - 1 << '\n'; // 결국 (정점의 개수 - 1)번만 타면 됨.
	}
	return 0;
}