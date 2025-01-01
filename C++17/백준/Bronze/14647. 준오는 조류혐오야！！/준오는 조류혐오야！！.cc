#include <iostream>

int main()
{
	int N, M; std::cin >> N >> M;

	int** map = new int* [N];
	for (int i = 0; i < N; i++)
		map[i] = new int[M];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			map[i][j] = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			std::string S; std::cin >> S;

			for (int k = 0; k < S.length(); k++)
				if (S[k] == '9')
					map[i][j]++;
		}
	}

	int* rows = new int[N]; for (int i = 0; i < N; i++) rows[i] = 0;
	int* cols = new int[M]; for (int j = 0; j < M; j++) cols[j] = 0;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			rows[i] += map[i][j];

	for (int j = 0; j < M; j++)
		for (int i = 0; i < N; i++)
			cols[j] += map[i][j];

	int max_nine_rows = 0;
	int max_nine_cols = 0;
	int nines = 0;

	for (int i = 0; i < N; i++)
		if (rows[max_nine_rows] < rows[i])
			max_nine_rows = i;

	for (int j = 0; j < M; j++)
		if (cols[max_nine_cols] < cols[j])
			max_nine_cols = j;

	if (rows[max_nine_rows] > cols[max_nine_cols])
	{
		for (int j = 0; j < M; j++)
			map[max_nine_rows][j] = 0;

		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
				nines += map[i][j];

		std::cout << nines;
	}
	else
	{
		for (int i = 0; i < N; i++)
			map[i][max_nine_cols] = 0;

		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
				nines += map[i][j];

		std::cout << nines;
	}

	for (int i = 0; i < N; i++)
		delete[] map[i];
	delete[] map;
	delete[] rows;
	delete[] cols;
}