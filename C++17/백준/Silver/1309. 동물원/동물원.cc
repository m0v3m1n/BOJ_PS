#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::vector<int> V(N + 1);
	V[0] = 1; V[1] = 3;

	for (int i = 2; i <= N; i++)
		V[i] = ((V[i - 1] * 2) % 9901 + V[i - 2] % 9901) % 9901;

	std::cout << V[N];
}