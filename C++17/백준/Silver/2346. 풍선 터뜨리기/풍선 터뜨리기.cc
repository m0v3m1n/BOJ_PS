#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, tmp, index = 0; std::cin >> N;
	std::vector<std::pair<int, int>> V;
	std::vector<int> result;

	for (int i = 0; i < N; i++)
	{
		std::cin >> tmp;
		V.push_back({ i + 1, tmp });
	}

	while (1)
	{
		result.push_back(V[index].first); // 몇 번째 풍선 터뜨렸는 지 기록.
		V[index].first = INT_MAX; // 터뜨린 거 기록.

		if (result.size() == N)
			break;

		int current_index = index;

		if (V[current_index].second > 0) // 몇 칸 가야하는 지 확인 --> 양수라면?
		{
			for (int k = 0; k < V[current_index].second; k++)
			{
				index = (index + 1) % N;
				while (V[index].first == INT_MAX) // 만약 방문했다면?
					index = (index + 1) % N; // 계속 점프.
			}
		}
		else if (V[current_index].second < 0) // 음수 -> 왼쪽 이동
		{
			for (int k = 0; k < -V[current_index].second; k++)
			{
				index = (index - 1 + N) % N;
				while (V[index].first == INT_MAX) // 만약 방문했다면?
					index = (index - 1 + N) % N; // 계속 점프.
			}
		}
	}

	for(auto&K:result)
		std::cout << K << ' ';
}