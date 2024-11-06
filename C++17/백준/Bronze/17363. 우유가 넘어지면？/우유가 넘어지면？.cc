#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int R, C; std::cin >> R >> C;
	std::vector<std::string> V(R);
	for (int i = 0; i < R; i++)
		std::cin >> V[i];

	for (int i = C - 1; i >= 0; i--)
	{
		for (int j = 0; j < R; j++)
			if (V[j][i] == '.')
				std::cout << '.';
			else if (V[j][i] == 'O')
				std::cout << 'O';
			else if (V[j][i] == '-')
				std::cout << '|';
			else if (V[j][i] == '|')
				std::cout << '-';
			else if (V[j][i] == '/')
				std::cout << '\\';
			else if (V[j][i] == '\\')
				std::cout << '/';
			else if (V[j][i] == '^')
				std::cout << '<';
			else if (V[j][i] == '<')
				std::cout << 'v';
			else if (V[j][i] == 'v')
				std::cout << '>';
			else if (V[j][i] == '>')
				std::cout << '^';

		std::cout << '\n';
	}
}