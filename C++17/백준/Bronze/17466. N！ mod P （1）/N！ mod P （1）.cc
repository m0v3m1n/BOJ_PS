#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N, P, res = 1;
	std::cin >> N >> P;

	for (int i = 1; i <= N; i++)
		res = ((res % P) * (i % P)) % P;

	std::cout << res;
	return 0;
}