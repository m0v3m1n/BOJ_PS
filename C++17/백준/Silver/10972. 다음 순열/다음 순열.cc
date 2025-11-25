#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;

	std::vector<int> V(N);
	for (auto& K : V)
		std::cin >> K;
	
	if (std::next_permutation(V.begin(), V.end()))
		for (auto& K : V)
			std::cout << K << ' ';
	else
		std::cout << -1;

	return 0;
}