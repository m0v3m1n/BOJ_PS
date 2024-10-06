#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	long long sum = 0;

	std::vector<long long> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	for (int i = 0; i < N; i++)
		for (int ii = 0; ii < N; ii++)
			if (i == ii)
				continue;
			else
				sum += (V[i] - V[ii] > 0 ? V[i] - V[ii] : -(V[i] - V[ii]));

	std::cout << sum;
	return 0;
}