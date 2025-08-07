#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N, R; std::cin >> N >> R;
	std::cout << 2 * R + (N - 1);
}