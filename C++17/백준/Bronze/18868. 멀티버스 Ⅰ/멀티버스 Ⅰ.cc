#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
	int M, N;
	std::cin >> M >> N;
	std::vector<std::vector<std::pair<int, int>>> input(M);

	for (int i = 0; i < M; i++)
	{
		input[i].resize(N);
		for (int j = 0; j < N; j++)
		{
			int k;
			std::cin >> k;
			input[i][j] = { k,j };
		}
	}

	int t_cnt = 0;
	int t_flag = 0;
	for (int i = 0; i < M; i++)
		sort(input[i].begin(), input[i].end());

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N - 1; j++)
			if (input[i][j].first == input[i][j + 1].first)
				input[i][j + 1].second = input[i][j].second;

	for (int i = 0; i < M; i++)
		for (int j = i + 1; j < M; j++)
		{
			t_flag = 0;

			for (int k = 0; k < N; k++)
				if (input[i][k].second != input[j][k].second)
				{
					t_flag = 1;
					break;
				}

			if (t_flag == 0)
				t_cnt++;
		}

	std::cout << t_cnt;
	return 0;
}