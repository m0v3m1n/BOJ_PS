#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int T, N; std::cin >> T;

	while (T--)
	{
		std::cin >> N;
		if (N == 1)
			std::cout << "Pairs for 1:" << '\n';
		else if (N == 2)
			std::cout << "Pairs for 2:" << '\n';
		else
		{
			std::cout << "Pairs for " << N << ": ";

			if (N % 2 == 0)
				for (int i = 1; i < N / 2; i++)
					if (i == (N / 2) - 1)
						std::cout << i << ' ' << N - i << '\n';
					else
						std::cout << i << ' ' << N - i << ", ";
			else
				for (int i = 1; i <= N / 2; i++)
					if (i == N / 2)
						std::cout << i << ' ' << N - i << '\n';
					else
						std::cout << i << ' ' << N - i << ", ";
		}
	}
}