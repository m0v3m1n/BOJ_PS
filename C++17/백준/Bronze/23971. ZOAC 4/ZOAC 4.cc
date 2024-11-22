#include <iostream>

long long CeilDiv(long long a, long long b)
{
	return (a + b - 1) / b;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	long long H, W, N, M; std::cin >> H >> W >> N >> M; 
	long long sum = CeilDiv(H, N + 1) * CeilDiv(W, M + 1);

	std::cout << sum;
	return 0;
}