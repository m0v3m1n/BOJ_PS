#include <iostream>
#include <vector>
#include <algorithm>

int BS(std::vector<int>& H, int C)
{
	int ans = 1; // 반환할 정답

	int min = 1; // 최소 거리
	int max = H[H.size() - 1] - H[0]; // 최대 거리
	int mid = (max + min) / 2;

	// mid보다 크거나 같은 거리에 떨어진 집마다 공유기 설치
	while (min <= max)
	{
		mid = (max + min) / 2;

		int prev = 0;
		int installed = 1;

		for (int i = 1; i < H.size(); i++)
			if (H[i] - H[prev] >= mid) // 만약 mid보다 거리가 길면
			{
				installed++; // 공유기 하나 설치
				prev = i; // 마지막으로 설치한 집 위치 기억
			}

		if (installed >= C) // C보다 공유기를 많이 설치했거나 똑같이 설치했다면?
		{
			ans = mid;
			min = mid + 1; // min을 높여 거리를 벌리기.
		}
		else // C보다 공유기를 적게 설치했다면? ==> 거리가 너무 멂.
			max = mid - 1; // 거리를 좁혀봄.
	}

	return ans;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, C;
	std::cin >> N >> C;

	std::vector<int> Houses(N);
	for (auto& K : Houses)
		std::cin >> K;
	std::sort(Houses.begin(), Houses.end());

	int ans = BS(Houses, C);
	std::cout << ans;

	return 0;
}