#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N; std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j <= N; j++)
			if (j % 2 == 0)
				std::cout << ' ';
			else
				std::cout << '*';

		std::cout << '\n';

		for (int j = 0; j < N; j++)
			if (j % 2 == 0)
				std::cout << ' ';
			else
				std::cout << '*';

		std::cout << '\n';
	}

	return 0;
}