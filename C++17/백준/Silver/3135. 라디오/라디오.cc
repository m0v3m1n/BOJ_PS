#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
	int A, B, N, tmp;
	std::cin >> A >> B >> N;

	std::vector<int> V_dist;

	for (int i = 0; i < N; i++) {
		std::cin >> tmp;
		V_dist.push_back(std::abs(B - tmp)); // 각 주파수에서 B 까지의 거리.
	}

	std::sort(V_dist.begin(), V_dist.end());

	if (std::abs(A - B) <= V_dist[0])
		std::cout << std::abs(A - B);
	else
		std::cout << V_dist[0] + 1;
}