#include <iostream>

int SK[1000001];
int SY[1000001];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, K, Y, count;
	std::cin >> N >> M;

	while (N && M) // 0, 0 이면 나가리.
	{
		K = 0; Y = 0; count = 0;

		for (int i = 0; i < N; i++)
			std::cin >> SK[i];
		for (int i = 0; i < M; i++)
			std::cin >> SY[i];
		// 입력은 이미 오름차순 --> 정렬 필요 X
		while (K < N && Y < M)
		{
			if (SK[K] == SY[Y])
			{
				count++;
				K++;
				Y++;
			}
			// 상근이 CD가 2, 4, 7, 9 중 4 / 상영이 CD가 1, 6, 8, 9 중 1
			// --> (4, 6) , (7, 6), (7, 8), (9, 8), (9, 9)
			else if (SK[K] > SY[Y])
				Y++;
			else
				K++;
		}

		std::cout << count << '\n';
		std::cin >> N >> M;
	}
	
	return 0;
}