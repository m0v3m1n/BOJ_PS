#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::pair<int, int> max = { 0, 0 };

	std::vector<int> V;
	for (int M = N; M > 0; M--)
	{
		V.clear();
		V.push_back(N);
		V.push_back(M);

		while (V[V.size() - 2] >= V[V.size() - 1])
			V.push_back(V[V.size() - 2] - V[V.size() - 1]);

		if (V.size() > max.first)
			max = { V.size(), M };
	}

	V.clear();
	V.push_back(N); V.push_back(max.second);
	while(V[V.size() - 2] >= V[V.size() - 1])
		V.push_back(V[V.size() - 2] - V[V.size() - 1]);

	std::cout << max.first << '\n';
	for (auto& K : V)
		std::cout << K << ' ';

	return 0;
}