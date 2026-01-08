#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, dice, pos = 0;
	std::cin >> N >> M;

	std::vector<int> vN(N), vM(M);
	for (auto& K : vN)
		std::cin >> K;
	for (auto& K : vM)
		std::cin >> K;

	for (int i = 0; i < M; i++)
	{
		pos += vM[i];
		if (pos >= N - 1)
		{
			std::cout << i + 1;
			break;
		}

		pos += vN[pos];
		if (pos >= N - 1)
		{
			std::cout << i + 1;
			break;
		}
	}

	return 0;
}