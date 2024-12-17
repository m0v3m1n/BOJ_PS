#include <iostream>
#include <vector>

int main()
{
	int K; std::cin >> K;

	while (K--)
	{
		int P, M, tmp; std::cin >> P >> M;
		std::vector<bool> seat(M, false);

		for (int i = 0; i < P; i++)
		{
			std::cin >> tmp;
			seat[tmp - 1] = true;
		}

		tmp = 0;
		for (int i = 0; i < M; i++)
			if (seat[i] == true)
				tmp++;

		std::cout << P - tmp << '\n';
	}
}