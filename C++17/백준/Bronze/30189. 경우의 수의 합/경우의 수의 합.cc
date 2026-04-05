#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, cnt = 0;
	std::cin >> N >> M;

	for (int i = 0; i <= N; i++)
		for (int j = 0; j <= M; j++)
			for (int k = 0; k <= N + M; k++)
				if (i + j == k)
					cnt++;

	std::cout << cnt;
	return 0;
}