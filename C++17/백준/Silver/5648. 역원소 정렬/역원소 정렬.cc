#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string tmps;
	int n;
	long long tmpll;

	std::vector <std::string> vS;
	std::vector<long long> vll;
	
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> tmps;
		std::reverse(tmps.begin(), tmps.end());
		vS.push_back(tmps);
	} tmps = "";

	for (int i = 0; i < vS.size(); i++)
	{
		for (int j = 0; j < vS[i].size(); j++)
			if (tmps == "" && vS[i][j] == '0')
				continue;
			else
				tmps += vS[i][j];

		tmpll = std::stoll(tmps);
		vll.push_back(tmpll);
		tmps = "";
	}

	std::sort(vll.begin(), vll.end());
	for (auto& K : vll)
		std::cout << K << '\n';
}