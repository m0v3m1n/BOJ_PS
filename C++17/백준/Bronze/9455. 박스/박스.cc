#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, M, N; std::cin >> T;
	while (T--)
	{
		int dist = 0;
		std::cin >> M >> N;
		std::vector<std::vector<int>> V(M, std::vector<int>(N));

		for (int i = 0; i < M; i++)
			for (int j = 0; j < N; j++)
				std::cin >> V[i][j];

		if (M == 1)
		{
			dist = 0;
			std::cout << dist << '\n';
			continue;
		}

		for (int i = M - 2; i >= 0; i--) // 2층 이상이면?
			for (int j = 0; j < N; j++) // 가로로 싹 흝고 위층으로 이동.
				if(V[i][j] == 1) // 1인데?
					for (int k = i + 1; k < M; k++)
						if (V[k][j] == 0) // 아랫칸이 0이면?
						{
							V[k - 1][j] = 0; // 원래 칸 0으로 만들어주고
							V[k][j] = 1; // 아래 칸 1으로 만들어주고
							dist++; // 거리 추가해버리기
						}
		std::cout << dist << '\n';
	}
}