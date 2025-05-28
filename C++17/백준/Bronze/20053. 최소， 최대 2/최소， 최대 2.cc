#include <iostream>
#include <vector>

int main(void) {

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, T, max, min, temp;

	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		max = -1000000;
		min = 1000000;

		std::cin >> N;

		for (int j = 0; j < N; j++)
		{
			std::cin >> temp;

			if (max < temp)
				max = temp;
			if (min > temp)
				min = temp;
		}

		std::cout << min << ' ' << max << '\n';
	}

}
