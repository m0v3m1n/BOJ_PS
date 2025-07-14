#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int N;
	std::cin >> N;

	while (N--)
	{
		int K, p = 1; std::cin >> K;
		for (int i = 0; i < K; i++)
			p *= 2;
		std::cout << p - 1 << '\n';
	}
	return 0;
}