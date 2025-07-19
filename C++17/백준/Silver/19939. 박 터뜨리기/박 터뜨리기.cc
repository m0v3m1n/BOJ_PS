#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, K;  std::cin >> N >> K;
	int tmp = K * (K + 1) / 2;

	if (N < tmp)
		std::cout << -1;
	else
	{
		N -= tmp;
		std::cout << K - 1 + (N % K != 0 ? 1 : 0);
	}

	return 0;
}