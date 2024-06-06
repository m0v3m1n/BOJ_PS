#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N, M, sum, max = 0, grd = 0, grd_max = 0; std::cin >> N >> M;

	std::vector<int> egg(M);
	std::vector<int> greedy(M);

	for (int i = 0; i < M; i++)
	{
		std::cin >> egg[i];
		greedy[i] = egg[i];
	}

	std::sort(greedy.begin(), greedy.end());

	if (N >= M) // 구매&판매 동일 또는 공급 과잉
	{
		for (int i = 0; i < M; i++)
		{
			sum = 0;
			for (int j = 0; j < M; j++)
			{
				if (greedy[i] <= egg[j])
				{
					sum += greedy[i];
					grd = greedy[i];
				}
			}
			if (sum > max)
			{
				max = sum;
				grd_max = grd;
			}
		}
	}
	else // 수요 과잉 --> 한정되게 팔아야 함
	{
		int egg_sale; // 판매한 계란 개수

		for (int i = 0; i < M; i++)
		{
			egg_sale = 0;
			sum = 0;

			for (int j = 0; j < M; j++)
			{
				if (greedy[i] <= egg[j])
				{
					sum += greedy[i]; 
					grd = greedy[i];

					egg_sale++;
					if (egg_sale == N)
						break;
				}
			}
			if (sum > max)
			{
				max = sum;
				grd_max = grd;
			}
		}
	}

	std::cout << grd_max << ' ' << max;
	return 0;
}