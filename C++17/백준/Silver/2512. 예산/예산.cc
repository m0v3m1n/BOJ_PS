#include <iostream>
#include <vector>
#include <algorithm>

#define MIN 1
#define MAX 100000

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, res, sum = 0;
	std::pair<int, int> max;

	std::cin >> N; std::vector<int> V(N);
	for (int i = 0; i < N; i++)
	{
		std::cin >> V[i];
		sum += V[i];
	}
	std::sort(V.begin(), V.end());

	std::cin >> M;
	if (sum <= M)
		std::cout << V[V.size() - 1];
	else
	{
		int start = MIN, end = MAX, mid;
		while (start <= end)
		{
			sum = 0; // 변수 재사용
			mid = (start + end) / 2;

			for (int i = 0; i < V.size(); i++)
				if (V[i] > mid)
					sum += mid;
				else
					sum += V[i];

			if (sum <= M) // 만약 합이 예산 이하라면?
			{
				res = mid; // 예산 상한선 저장해주고
				start = mid + 1; // 예산 높여보기
			}
			else // 합이 예산 밖이라면?
				end = mid - 1; // 예산 줄이기
		}
		std::cout << res;
	}
	return 0;
}