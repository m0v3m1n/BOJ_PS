#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<int, int> P1, std::pair<int, int> P2) {
	return P1.first < P2.first; }

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N, a, b, cnt, max;
	std::pair<int, int> tmp_P;
	std::vector<std::pair<int, int>> V;

	std::cin >> T;

	while (T--)
	{
		V.clear();

		std::cin >> N;
		for (int i = 0; i < N; i++)
		{
			std::cin >> a >> b;
			tmp_P.first = a; tmp_P.second = b;
			V.push_back(tmp_P);
		}
		
		std::sort(V.begin(), V.end(), cmp);

		max = V[0].second; // 1차 등수 1등의 2차 등수를 초기값 설정.
		cnt = 1; // 1등은 항상 포함

		for (int i = 1; i < N; i++)
		{
			if (V[i].second < max)
				// 만약 1차 등수 낮은 놈이 2차 등수가 높으면 합격
			{
				cnt++; // 합격 해주고
				max = V[i].second; // 1차 등수 낮았던 놈 기준으로 2차 등수 하한 설정.
			}
		}
		std::cout << cnt << '\n';
	}

	return 0;
}