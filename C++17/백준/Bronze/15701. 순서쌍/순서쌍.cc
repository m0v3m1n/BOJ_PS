#include <iostream>
#include <cmath>

int main()
{
	int N, cnt = 0; std::cin >> N;

	for (int i = 1; i * i <= N; i++)
	{
		if (N % i == 0)
			if (i * i == N)
				cnt++;
			else
				cnt += 2;
	}

	std::cout << cnt;
}