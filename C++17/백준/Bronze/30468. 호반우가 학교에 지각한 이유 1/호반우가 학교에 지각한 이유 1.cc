#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int s, d, i, l, total = 0, n;
	std::cin >> s >> d >> i >> l >> n;

	total = (s + d + i + l);

	if (total >= n * 4)
		std::cout << 0;
	else
		std::cout << (n * 4) - total;

	return 0;
}