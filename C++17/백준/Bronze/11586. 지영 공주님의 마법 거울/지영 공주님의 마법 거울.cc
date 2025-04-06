#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, K;
	std::cin >> N;

	std::vector<std::string> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	std::cin >> K;

	if (K == 1)
		for (auto& A : V)
			std::cout << A << '\n';
	else if (K == 2)
		for (auto& A : V)
		{
			for (int i = A.length() - 1; i >= 0; i--)
				std::cout << A[i];
			std::cout << '\n';
		}
	else if (K == 3)
		for (int i = V.size() - 1; i >= 0; i--)
			std::cout << V[i] << '\n';

	return 0;
}