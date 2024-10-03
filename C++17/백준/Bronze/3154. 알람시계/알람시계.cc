#pragma warning(disable:4996)
#include <iostream>
#include <string>

int main()
{
	int num_to_num[10][10] = {
		{0, 4, 3, 4, 3, 2, 3, 2, 1, 2},
		{4, 0, 1, 2, 1, 2, 3, 2, 3, 4},
		{3, 1, 0, 1, 2, 1, 2, 3, 2, 3},
		{4, 2, 1, 0, 3, 2, 1, 4, 3, 2},
		{3, 1, 2, 3, 0, 1, 2, 1, 2, 3},
		{2, 2, 1, 2, 1, 0, 1, 2, 1, 2},
		{3, 3, 2, 1, 2, 1, 0, 3, 2, 1},
		{2, 2, 3, 4, 1, 2, 3, 0, 1, 2},
		{1, 3, 2, 3, 2, 1, 2, 1, 0, 1},
		{2, 4, 3, 2, 3, 2, 1, 2, 1, 0},
	};

	std::string S; std::cin >> S;

	int min = 9999, x = 0, y = 0;
	int h = (S[0] - '0') * 10 + (S[1] - '0');
	int m = (S[3] - '0') * 10 + (S[4] - '0');
	

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (i % 24 != h || j % 60 != m)
				continue;
			else
			{
				int sum = num_to_num[i / 10][i % 10] + num_to_num[i % 10][j / 10] + num_to_num[j / 10][j % 10];
				if (sum < min)
				{
					min = sum;
					x = i;
					y = j;
				}
			}

	std::cout << (x < 10 ? "0" : "") << x << ":" << (y < 10 ? "0" : "") << y;
	return 0;
}