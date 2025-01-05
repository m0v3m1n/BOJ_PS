#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
	int N, P; std::cin >> N >> P;
	int ans = P;

	if (N >= 5) ans = std::min(ans, P - 500);
	if (N >= 10) ans = std::min(ans, P / 10 * 9);
	if (N >= 15) ans = std::min(ans, P - 2000);
	if (N >= 20) ans = std::min(ans, P / 4 * 3);

	std::cout << std::max(ans, 0);
}