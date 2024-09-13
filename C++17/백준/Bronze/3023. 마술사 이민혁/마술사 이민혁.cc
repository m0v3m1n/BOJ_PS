#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int r, c; std::cin >> r >> c;

	std::vector <std::string> V(r);
	for (int i = 0; i < r; i++)
		std::cin >> V[i];

	for (int i = r - 1; i >= 0; i--)
		V.push_back(V[i]);

	for (int i = 0; i < V.size(); i++)
		for (int j = c - 1; j >= 0; j--)
			V[i] += V[i][j];

	std::cin >> r >> c;

	if (V[r - 1][c - 1] == '#')
		V[r - 1][c - 1] = '.';
	else
		V[r - 1][c - 1] = '#';

	for (auto& K : V)
		std::cout << K << '\n';
}