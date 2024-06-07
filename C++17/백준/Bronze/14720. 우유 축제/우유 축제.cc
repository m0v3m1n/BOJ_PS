#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, sum = 0, max = 0, prev; std::cin >> N;
	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	int idx = 0;
	while (idx < N) // 제일 처음 0인 곳 확인.
		if (V[idx] == 0)
			break;
		else
			idx++;

	if (idx < N)
	{
		prev = V[idx];
		sum = 1;
	}
	else
		sum = 0;

	for (int i = idx + 1; i < N; i)
	{
		while (i < N && V[i] != (prev + 1) % 3)
			i++;

		if (i == N)
			break;

		sum++;
		prev = V[i];
	}

	std::cout << sum;
	return 0;
}