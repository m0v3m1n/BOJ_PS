#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::vector<std::vector<int>> V(N, std::vector<int>(N, 0));

	for (int i = 0; i < N; i++)
	{
		std::string S; std::cin >> S;
		for (int j = 0; j < S.length(); j++)
			if (S[j] == '*')
			{
				V[i][j] = -1;
				
				for (int r = -1; r < 2; r++)
					for (int c = -1; c < 2; c++)
						if (i + r >= 0 && i + r < N && j + c >= 0 && j + c < N && V[i + r][j + c] != -1)
							V[i + r][j + c]++;
			}
	}
	
	bool boom = false;
	std::vector<std::string> Strs(N);

	for (int i = 0; i < N; i++)
	{
		std::cin >> Strs[i];
		for (int j = 0; j < Strs[i].length(); j++)
			if (Strs[i][j] == 'x' && V[i][j] == -1)
				boom = true;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			if (Strs[i][j] == 'x')
				if (V[i][j] == -1)
					std::cout << '*';
				else
					std::cout << V[i][j];
			else // 온점
				if (boom && V[i][j] == -1)
					std::cout << '*';
				else
					std::cout << '.';

		std::cout << '\n';
	}

	return 0;
}