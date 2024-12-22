#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	int N, I; std::cin >> N >> I;

	std::vector<std::string> V(N);

	for (int i = 0; i < N; i++)
		std::cin >> V[i];
	std::sort(V.begin(), V.end());

	std::cout << V[I - 1];
}