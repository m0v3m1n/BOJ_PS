#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, max;
	bool flag1 = true, flag2 = true;

	std::cin >> N >> M;

	max = std::sqrt(N) + 1;
	for (int i = 2; i <= max; i++)
		if (N % i == 0) // 나누어떨어지면
			flag1 = false;

	N = M * 1000000 + N;
	max = std::sqrt(N) + 1;
	for (int i = 2; i <= max; i++)
		if (N % i == 0) // 나누어떨어지면
			flag2 = false;

	if (flag1 && flag2)
		std::cout << "Yes";
	else
		std::cout << "No";

	return 0;
}