#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int A, B, C, M, stress = 0, work = 0;
	std::cin >> A >> B >> C >> M;

	for (int i = 0; i < 24; i++)
	{
		if (stress + A <= M)
		{
			work += B;
			stress += A;
		}
		else
			stress = std::max(0, stress - C);
	}

	std::cout << work;
}
