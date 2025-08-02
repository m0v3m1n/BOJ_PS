#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<int, int> A, std::pair<int, int> B)
{
	if (A.first == B.first)
		return A.second < B.second;
	else
		return A.first > B.first;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, cnt = 0;
	std::cin >> N;

	std::vector<std::pair<int, int>> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i].first >> V[i].second;
	std::sort(V.begin(), V.end(), cmp);

	for (int i = 5; i < N; i++)
		if (V[4].first == V[i].first)
			cnt++;

	std::cout << cnt;
	return 0;
} 