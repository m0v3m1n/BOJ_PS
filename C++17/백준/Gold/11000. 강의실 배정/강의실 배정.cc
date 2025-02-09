#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::cin >> N;
	std::vector<std::pair<int, int>> V(N);

	for (int i = 0; i < N; i++)
		std::cin >> V[i].first >> V[i].second;

	std::sort(V.begin(), V.end());

	std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // 최솟값 우선.

	pq.push(V[0].second);

	for (int i = 1; i < N; i++)
	{
		if (V[i].first >= pq.top())
			pq.pop();

		pq.push(V[i].second);
	}

	std::cout << pq.size();
	return 0;
}