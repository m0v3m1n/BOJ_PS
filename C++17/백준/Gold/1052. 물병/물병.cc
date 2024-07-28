#include <iostream>

int main()
{
	int N, K, power_2; std::cin >> N >> K;

	if (N <= K)
		std::cout << 0;
	else
	{
		while (K > 1)
		{
			power_2 = 1;
			while (power_2 < N)
				power_2 *= 2; // N보다 큰, N과 가장 가까운 2의 거듭제곱.
			power_2 /= 2;  // N보다 작은, N과 가장 가까운 2의 거듭제곱 만들어줌.

			N -= power_2;
			K--; // N과 K 감소 시켜줌.
		}

		power_2 = 1;
		while (power_2 < N)
			power_2 *= 2;

		std::cout << power_2 - N;
	}
}