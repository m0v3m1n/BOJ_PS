#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int N, M, max_len = 100000 * 10000 + 1, left = 0, right = 0;
	std::cin >> N >> M;

	std::vector<int> Lecture(N); 
	for (auto& K : Lecture)
	{
		std::cin >> K;
		right += K;

		if (left < K)
			left = K;
	} // left = 최댓값, right = 전체 합

	while (left <= right)
	{
		int b = 0; // 녹화된 블루레이 개수
		int idx = 0; // 인덱스
		int mid = (left + right) / 2; // 중간값

		std::vector<int> Blueray(1, 0); // 블루레이 개수

		for (int i = 0; i < Blueray.size(); i++)
		{
			while (Blueray[i] + Lecture[idx] <= mid)
			{
				Blueray[i] += Lecture[idx];
				idx++;

				if (idx >= N)
					break;
			}

			if (Blueray[i])
				Blueray.push_back(0);

			if (idx >= N)
				break;
		}
		
		if (!Blueray[Blueray.size() - 1])
			Blueray.pop_back();

		if (Blueray.size() > M)
			left = mid + 1;
		else
		{
			int tmp = 0;
			for (auto& K : Blueray)
				tmp = tmp > K ? tmp : K;

			max_len = max_len < tmp ? max_len : tmp;
			right = mid - 1;
		}
	}

	std::cout << max_len;
	return 0;
}