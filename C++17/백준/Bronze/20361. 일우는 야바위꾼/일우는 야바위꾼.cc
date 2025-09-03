#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, X, K, a, b;
	std::cin >> N >> X >> K;

	bool* cups = new bool[N + 1];
	for (int i = 0; i <= N; i++)
		cups[i] = false;

	cups[X] = true;

	for (int i = 0; i < K; i++)
	{
		std::cin >> a >> b;
		bool tmp = cups[a];
		cups[a] = cups[b];
		cups[b] = tmp;
	}

	for (int i = 1; i <= N; i++)
		if (cups[i])
			std::cout << i;

	delete[] cups;
	return 0;
} 