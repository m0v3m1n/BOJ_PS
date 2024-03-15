#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N, sum = 0; std::cin >> N;
	std::vector<int> dist(N - 1);
	std::vector<int> oil(N);

	for (int i = 0; i < N - 1; i++)
		std::cin >> dist[i];
	for (int i = 0; i < N; i++)
		std::cin >> oil[i];

	int cur = 0, next = 1;
	sum += (oil[0] * dist[0]);

	while (next < N - 1)
	{
		if (oil[cur] <= oil[next]) // 지금 도시가 더 싸면
		{
			sum += (oil[cur] * dist[next]);
			next++;
		}
		else // 다음 도시가 더 싸면
		{
			sum += (oil[next] * dist[next]);
			cur = next; next++;
		}
	}

	std::cout << sum;
	return 0;
}