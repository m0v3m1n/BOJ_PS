#include <iostream>
#include <vector>

int main()
{
	int T; std::cin >> T;
	while (T--)
	{
		int N, sum = 0; std::cin >> N;
		std::vector<bool> V(N + 1);
		for (int i = 0; i < N + 1; i++)
			V[i] = false;

		for (int i = 1; i <= N; i++)
			for (int j = i; j <= N; j += i)
				V[j] = !V[j];

		for (auto K : V)
			if (K == true)
				sum++;

		std::cout << sum << '\n';
	}
	return 0;
}