#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int T; std::cin >> T;
	while (T--)
	{
		int N, M, X, Y, count = 0;
		char t;
		std::string tmp;

		std::cin >> N >> M;

		for (int i = 0; i < M; i++)
		{
			std::cin >> t;
			tmp += t;
		} X = std::stoi(tmp); tmp = "";

		for (int i = 0; i < M; i++)
		{
			std::cin >> t;
			tmp += t;
		} Y = std::stoi(tmp); tmp = "";

		std::vector<char> V(N);
		for (int i = 0; i < N; i++)
			std::cin >> V[i];
		for(int i = 0; i < M; i++)
			V.push_back(V[i]);

		for (int i = 0; i < N; i++)
		{
			for (int j = i; j < i + M; j++)
				tmp += V[j];

			if (X <= std::stoi(tmp) && std::stoi(tmp) <= Y)
				count++;

			tmp = "";
		}

		std::cout << count << '\n';
	}
	return 0;
}