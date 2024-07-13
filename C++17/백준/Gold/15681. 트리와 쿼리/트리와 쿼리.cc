#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int DP[100001];
std::vector<std::vector<int>> V;

int subtree_dp(int self, int parent)
{
	int count = 1;

	for (int i = 0; i < V[self].size(); i++)
		if (V[self][i] != parent)
			count += subtree_dp(V[self][i], self);

	return DP[self] = count;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, R, Q, a, b; std::cin >> N >> R >> Q;

	std::vector<int> tmp;
	for (int i = 0; i < N + 1; i++)
		V.push_back(tmp); // 전역변수 vector의 크기 설정

	for (int i = 0; i < N - 1; i++)
	{
		std::cin >> a >> b;
		V[a].push_back(b);
		V[b].push_back(a);
	}

	subtree_dp(R, -1);
	for (int i = 0; i < Q; i++)
	{
		std::cin >> a;
		std::cout << DP[a] << '\n';
	}

	return 0;
}