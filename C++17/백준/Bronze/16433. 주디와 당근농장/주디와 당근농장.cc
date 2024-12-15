#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int N, R, C; std::cin >> N >> R >> C;

	bool** map = new bool* [N];
	for (int i = 0; i < N; i++)
		map[i] = new bool[N];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			map[i][j] = false;

	R--; C--;
	bool flag_R = false;
	bool flag_C = false;
	map[R][C] = true;

	for (int i = 0; i < N; i++)
		map[R][i] = (i % 2 == C % 2 ? true : false);

	for (int i = R - 1; i >= 0; i--)
		for (int j = 0; j < N; j++)
			map[i][j] = !(map[i + 1][j]);

	for (int i = R + 1; i < N; i++)
		for (int j = 0; j < N; j++)
			map[i][j] = !(map[i - 1][j]);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			std::cout << (map[i][j] ? 'v' : '.');
		std::cout << '\n';
	}

	for (int i = 0; i < N; i++)
		delete[] map[i];
	delete[] map;
}