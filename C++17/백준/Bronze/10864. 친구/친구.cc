#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, a, b; std::cin >> N >> M;
	std::vector<int> V(N, 0);

	for (int i = 0; i < M; i++)
	{
		std::cin >> a >> b;
		V[a - 1]++;
		V[b - 1]++;
	}

	for (auto& K : V)
		std::cout << K << '\n';

	return 0;
}