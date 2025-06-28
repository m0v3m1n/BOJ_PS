#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, start, road, speed, diff_max = 0;
	int legal[101] = { 0, };
	int illegal[101] = { 0, };

	std::cin >> N >> M;

	start = 1;
	for (int i = 0; i < N; i++)
	{
		std::cin >> road >> speed;

		for (int j = 1; j <= road; j++)
			legal[start++] = speed;
	}

	start = 1;
	for (int i = 0; i < M; i++)
	{
		std::cin >> road >> speed;

		for (int j = 1; j <= road; j++)
			illegal[start++] = speed;
	}

	for (int i = 1; i <= 100; i++)
		diff_max = illegal[i] - legal[i] > diff_max ? illegal[i] - legal[i] : diff_max;

	std::cout << diff_max;
	return 0;
}