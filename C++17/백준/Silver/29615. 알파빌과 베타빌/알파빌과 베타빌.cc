#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, have_to_go = 0, cnt = 0;
	std::cin >> N >> M;

	std::vector<int> line(N);
	std::vector<int> friends(M);

	for (int i = 0; i < N; i++)
		std::cin >> line[i];
	for (int i = 0; i < M; i++)
		std::cin >> friends[i];

	for (int i = 0; i < M; i++)
		if (std::find(friends.begin(), friends.end(), line[i]) == friends.end())
			cnt++;

	std::cout << cnt;
	return 0;
}