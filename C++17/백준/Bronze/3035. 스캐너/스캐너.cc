#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int R, C, ZR, ZC; std::cin >> R >> C >> ZR >> ZC;
	std::vector<std::string> Or(R), Re;
	for (int i = 0; i < R; i++)
		std::cin >> Or[i];

	for (int i = 0; i < Or.size(); i++)
	{
		std::string tmp;
		for (int j = 0; j < Or[i].size(); j++)
			for (int k = 0; k < ZC; k++)
				tmp += Or[i][j];
		
		for (int j = 0; j < ZR; j++)
			Re.push_back(tmp);
	}

	for (auto& K : Re)
		std::cout << K << '\n';
}