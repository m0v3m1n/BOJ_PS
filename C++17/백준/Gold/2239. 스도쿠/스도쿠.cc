#include <iostream>
#include <string>
#include <vector>

// (0,0)부터 (8,8)까지 도합 81개.
// --> r = X / 9, c = X % 9 로 한다면?
// 0부터 80까지 돌았을 때, (0,0) ~ (8,8) 가능.

int map[9][9];

bool check(int r, int c, int N)
{
	for (int i = 0; i < 9; i++)
	{
		if (map[r][i] == N) // 같은 행 체크
			return false;
		if (map[i][c] == N) // 같은 열 체크
			return false;
	}

	int R = (r / 3) * 3;
	int C = (c / 3) * 3;

	for (int i = R; i < R + 3; i++) // 같은 격자 체크
		for (int j = C; j < C + 3; j++)
			if (map[i][j] == N)
				return false;
	return true;
}

void BT(int X)
{
	if (X == 81)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
				std::cout << map[i][j];
			std::cout << '\n';
		}
		exit(0);
	}

	int r = X / 9;
	int c = X % 9;

	if (map[r][c] == 0)	// 만약 0이면? --> 채우면서 백트래킹
	{
		for (int i = 1; i <= 9; i++)
		{
			if (check(r, c, i)) // 만약 가로, 세로, 3x3 격자에 같은 숫자가 없다면?
			{
				map[r][c] = i;
				BT(X + 1); // 다음 칸에 i 넣으면서 재귀 들어감
			}
		}
		map[r][c] = 0;
	}
	else // 0 아니면?
	{
		BT(X + 1);
	}
}

int main()
{
	std::string S;

	for (int i = 0; i < 9; i++)
	{
		std::cin >> S;
		for (int j = 0; j < 9; j++)
			map[i][j] = S[j] - '0';
	}

	BT(0);
}