#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int N, count = 1;
	std::cin >> N;

	while (N != 1)
	{
		if (N % 2) // 홀수
		{
			N *= 3;
			N++;
		}
		else // 짝수
		{
			N /= 2;
		}

		count++;
	}

	std::cout << count;
	return 0;
}