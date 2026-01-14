#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long K, N;
	std::cin >> K >> N;

	if (N == 1)
		std::cout << -1;
	else
		if ((K * N) % (N - 1))
			std::cout << 1 + (K * N) / (N - 1);
		else
			std::cout << (K * N) / (N - 1);

	return 0;
}