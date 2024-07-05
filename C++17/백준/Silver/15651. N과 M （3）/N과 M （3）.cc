#include <iostream>
#include <vector>

int N, M;
std::vector<int> V;

void BT(int depth)
{
	if (depth == M)
	{
		for (auto& K : V)
			std::cout << K << ' ';
		std::cout << '\n';

		return;
	}

	for (int i = 1; i <= N; i++)
	{
		V.push_back(i);
		BT(depth + 1);
		V.pop_back();
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::cin >> N >> M;

	BT(0);

	return 0;
}