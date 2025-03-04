#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int r, c; std::cin >> r >> c;

	std::vector<std::string> v(r);
	for (int i = 0; i < r; i++)
		std::cin >> v[i];

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (v[i][j] == '.')
				continue;
			else
				v[i][c - j - 1] = v[i][j];

	for (auto& K : v)
		std::cout << K << '\n';

	return 0;
}