#include <iostream>
#include <algorithm>
#include <queue>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, tmp; std::cin >> N;
	std::priority_queue<int> pq;

	for (int i = 0; i < N * N; i++)
	{
		std::cin >> tmp;
		pq.push(-tmp);

		if (pq.size() > N)
			pq.pop();
	}

	std::cout << -pq.top();
	return 0;
}