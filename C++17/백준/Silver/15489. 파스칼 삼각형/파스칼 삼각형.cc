#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int R, C, W, width = 0, sum = 0;
	std::cin >> R >> C >> W;

	// R + W <= 30, W >= 1 --> R은 최대 29 --> 30번째 줄까지 일단 만들어버리기
	std::vector<std::vector<int>> V(30);
	for (int i = 0; i < 30; i++)
		V[i] = std::vector<int>(i + 1, 0);

	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < i + 1; j++)
			if (i == 0)
				V[i][j] = 1;
			else
			{
				if (j == 0 || j == i)
					V[i][j] = 1;
				else
					V[i][j] = V[i - 1][j - 1] + V[i - 1][j];
			}
	}
	
	for (int r = 0; r < W; r++)
	{
		width++;
		for (int c = 0; c < width; c++)
			sum += V[R - 1 + r][C - 1 + c];
	}

	std::cout << sum;
}