#include <iostream>
#include <vector>

int find(std::vector<int>& parent, int x)
{
	if (x == parent[x])
		return x;
	else
		return parent[x] = find(parent, parent[x]);
}

void unite(std::vector<int>& parent, int x, int y)
{
	int px = find(parent, x);
	int py = find(parent, y);

	if (px != py)
		parent[px] = py;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int N, M, T, partySize, possibleCount = 0;
	std::cin >> N >> M >> T;

	std::vector<int> parent(N + 1);
	for (int i = 0; i <= N; i++)
		parent[i] = i;

	std::vector<int> knowTruth(T);
	std::vector<int> knowTruthRoot; // 추후 Union-Find 에서 사용.
	for (auto& K : knowTruth)
		std::cin >> K;

	std::vector<std::vector<int>> parties(M);

	for (int i = 0; i < M; i++) // 각 파티별 인원 기입
	{
		std::cin >> partySize;

		parties[i].resize(partySize);
		for (auto& K : parties[i])
			std::cin >> K;

		for (int j = 1; j < parties[i].size(); j++)
			unite(parent, parties[i][0], parties[i][j]);
	}

	for (auto& K : knowTruth)
		knowTruthRoot.push_back(find(parent, K));

	for (auto& K : parties) // 각 파티에 대해
	{
		bool possible_lying = true; // 거짓말 가능성은 true로 설정.
		
		for (auto& L : K)
		{
			int root = find(parent, L);

			for (auto& O : knowTruthRoot)
				if (root == O)
				{
					possible_lying = false; // 진실 아는 사람들의 루트와 연결된 루트가 같다 == 진실 앎
					break;
				}

			if (!possible_lying)
				break;
		}

		if (possible_lying)
			possibleCount++;
	}

	std::cout << possibleCount;
	return 0;
}