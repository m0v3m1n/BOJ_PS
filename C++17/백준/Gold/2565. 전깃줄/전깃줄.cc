#include <iostream>
#include <algorithm>

bool cmp(std::pair<int, int> A, std::pair<int, int> B)
{
	// 어차피 같은 전봇대로 이어지는 줄 없음
	// --> 왼쪽 기준 정렬.
	return A.first < B.first;
}

std::pair<int, int> LINE[501];
int LIS[501];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N; std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> LINE[i].first >> LINE[i].second;
	std::sort(LINE, LINE + N, cmp);
	// 입력 받은 전봇대와 전깃줄 :
	// 왼 : 1 2 3 4 6 7 9 0(10)
	// 오 : 8 2 9 1 4 6 7 0(10)
	// --> 전체 전깃줄 수 - (최장 길이 증가 부분 수열의 길이) => 8 - 5 = 3.
	for (int i = 0; i < N; i++)
	{
		if (LIS[i] == 0)
			LIS[i] = 1;

		for (int j = 0; j < i; j++)
			if (LINE[i].second > LINE[j].second)
				if (LIS[i] < LIS[j] + 1)
					LIS[i] = LIS[j] + 1;
	}

	int max = 0;
	for (int i = 0; i < N; i++)
	{
		if (LIS[i] > max)
			max = LIS[i];
	}
	std::cout << N - max; // 전깃줄 수 - LIS 길이
	return 0;
}