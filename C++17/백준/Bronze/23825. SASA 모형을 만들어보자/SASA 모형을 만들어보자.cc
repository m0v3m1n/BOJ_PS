#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int N, M; std::cin >> N >> M;
	std::cout << (N / 2 < M / 2 ? N / 2 : M / 2);
	return 0;
}