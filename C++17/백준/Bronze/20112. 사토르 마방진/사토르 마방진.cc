#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;

	std::vector<std::string> r(N), c(N, "");
	for (int i = 0; i < N; i++)
	{
		std::cin >> r[i];
		for (int j = 0; j < N; j++)
			c[j] += r[i][j];
	}

	//for (auto& K : r)
	//	std::cout << K << '\n';
	//for (auto& K : c)
	//	std::cout << K << '\n';

	for(int i = 0; i < N; i++)
		if (r[i] != c[i])
		{
			std::cout << "NO";
			return 0;
		}

	std::cout << "YES";
}