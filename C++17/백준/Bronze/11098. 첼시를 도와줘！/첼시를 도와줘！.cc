#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, P, C;
	std::cin >> T;

	while (T--)
	{
		std::cin >> P;

		std::vector<std::pair<int, std::string>> V(P);

		for (int i = 0; i < P; i++)
			std::cin >> V[i].first >> V[i].second;

		std::sort(V.begin(), V.end());

		std::cout << V[P - 1].second << '\n';
	}
}