#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M; std::cin >> N >> M;
	std::vector<int> V(M);
	for (int i = 1; i <= M; i++)
	{
		int tmp = N * i;
		std::string tmp_s = std::to_string(tmp);

		std::reverse(tmp_s.begin(), tmp_s.end());
		tmp = std::stoi(tmp_s);

		V[i - 1] = tmp;
	}

	std::sort(V.begin(), V.end());
	std::cout << V[M - 1];
	return 0;
}