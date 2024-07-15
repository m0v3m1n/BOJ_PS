#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> fruit(10, 0); // 과일 확인용.

bool fruit_search()
{
	int count = 0;

	for (int i = 1; i <= 9; i++)
		if (fruit[i] > 0)
			count++;

	if (count > 2)
		return true;
	else
		return false;
}


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, left, right, count = 0, tmp_max = 0,  max = 0;
	std::cin >> N;

	std::vector<int> tanghuru(N);

	for (int i = 0; i < N; i++)
		std::cin >> tanghuru[i];

	left = 0; right = left;

	while (right < N)
	{
		fruit[tanghuru[right]]++;
		right++;
		tmp_max++;

		if (fruit_search()) // 만약 과일 종류가 2개 이상이면?
		{
			while (fruit_search()) // 1개 이하 될 때까지
			{
				fruit[tanghuru[left]]--;
				left++;
				tmp_max--;
			}
		}
		max = std::max(max, tmp_max); // 기존 종류의 과일 개수 vs 새로운 2개 종류의 과일 개수.
	}

	if (!fruit_search()) // 끝까지 돌았는데 만약 과일 종류가 2개 이하?
		max = std::max(max, tmp_max); // 끝까지 비교해줘야지...

	std::cout << max;
	return 0;
}