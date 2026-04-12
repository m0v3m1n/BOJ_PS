#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, K;
	std::cin >> N >> M >> K;
	std::cout << (M / N) * K;
	return 0;
}