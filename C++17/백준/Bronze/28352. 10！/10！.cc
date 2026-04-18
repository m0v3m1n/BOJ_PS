#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N, res = 1;
	std::cin >> N;
	
	for (int i = 1; i <= N; i++)
		res *= i;

	std::cout << 6 * res / 3628800;
	return 0;
}