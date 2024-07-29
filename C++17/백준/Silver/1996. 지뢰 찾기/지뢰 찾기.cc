#include <iostream>
#include <string>

int row_move[3] = { -1,0,1 };
int col_move[3] = { -1,0,1 };

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::string S;

	int** arr = new int* [N];
	for (int i = 0; i < N; i++)
		arr[i] = new int[N];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			arr[i][j] = 0;

	for (int i = 0; i < N; i++)
	{
		std::cin >> S;
		for (int j = 0; j < S.size(); j++)
		{
			if (S[j] >= '1' && S[j] <= '9') // i, j는 위치로 사용 가능.
			{
				arr[i][j] = -100;
				for(int k = 0; k < 3; k++)
					for (int l = 0; l < 3; l++)
					{
						if (k == 1 && l == 1)
							continue;
						else
							if (i + row_move[k] >= 0 && i + row_move[k] < N &&
								j + col_move[l] >= 0 && j + col_move[l] < N)
								arr[i + row_move[k]][j + col_move[l]] += (S[j] - '0');
					}
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			if (arr[i][j] < 0)
				std::cout << '*';
			else if (arr[i][j] >= 10)
				std::cout << 'M';
			else
				std::cout << arr[i][j];

		std::cout << '\n';
	}

	for (int i = 0; i < N; i++)
		delete[] arr[i];
	delete[] arr;
}