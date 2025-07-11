#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M; std::cin >> N >> M;
	std::vector<int> V(N), VV(M);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];
	for (int i = 0; i < M; i++)
		std::cin >> VV[i];

	std::sort(V.begin(), V.end(), std::greater<int>());
	std::sort(VV.begin(), VV.end(), std::greater<int>());

	std::cout << V[0] + VV[0];
	return 0;
}