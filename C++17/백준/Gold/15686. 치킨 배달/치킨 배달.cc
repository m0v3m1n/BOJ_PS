#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>


int dist_cal(std::pair<int, int> cur, std::pair<int, int> chick)
{
	// X, Y의 절대값 계산한 뒤 더하면 그게 거리.
	return std::abs(cur.first - chick.first) + std::abs(cur.second - chick.second);
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, min = 999999, dist, chicken_dist;
	std::cin >> N >> M;

	int** map = nullptr;
	std::vector<std::pair<int, int>> chicken;

	map = new int* [N]; // 2차원 배열 동적 할당
	for (int i = 0; i < N; i++)
		map[i] = new int[N];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			std::cin >> map[i][j];
			if (map[i][j] == 2)
				chicken.push_back({ i, j }); // 치킨집 좌표 넣기.
		}

	std::vector<int> spV(chicken.size(), 1); // 치킨집 개수 중에
	for (int i = 0; i < M; i++) // 몇 개 살릴건지 선택.
		spV[i] = 0;

	// 치킨집 좌표 개수(= 치킨집 개수)에서 M개 선택했을 때,
	// 살아있는 치킨집까지의 거리를 모두 계산.
	// 이후 최소값 저장.
	do
	{
		dist = 99999;
		chicken_dist = 0; // 거리 및 치킨 거리 초기화.

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++) // 지도 완전 탐색
			{
				if (map[i][j] == 1) // 만약 일반 집이라면?
				{
					for (int k = 0; k < chicken.size(); k++) // 치킨집들 중에서
						if (spV[k] == 0) // 살아남은 치킨집일 경우
							dist = std::min(dist, dist_cal({ i,j }, chicken[k])); // 거리 계산.

					chicken_dist += dist;
					dist = 99999;
				}
			}
		}

		if (min > chicken_dist)
			min = chicken_dist;
	} while (std::next_permutation(spV.begin(), spV.end())); // 살릴 치킨 집의 조합

	std::cout << min;
	// ============================ 본 코드 끝

	for (int i = 0; i < N; i++) // 2차원 배열 동적 할당 해제
		delete[] map[i];
	delete[] map;
	return 0;
}