#include <iostream>

int main()
{
	int A, B, C, N; std::cin >> A >> B >> C >> N;

	for(int i = 0; i <= 300; i++)
		for(int j = 0; j <= 150; j++)
			for(int k = 0; k <= 100; k++)
				if (A * i + B * j + C * k == N)
				{
					std::cout << 1;
					return 0;
				}

	std::cout << 0;
}