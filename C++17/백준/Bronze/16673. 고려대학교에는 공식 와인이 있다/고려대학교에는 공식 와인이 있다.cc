#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	long long c, k, p, total = 0;
	std::cin >> c >> k >> p;
	for (int i = 1; i <= c; i++)
		total += (k * i) + (p * i * i);
	std::cout << total;
	return 0;
}