#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

bool cmp(std::pair<std::string, int> A, std::pair<std::string, int> B)
{
	if (A.second == B.second)
		return A.first < B.first;
	else
		return A.second > B.second;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::string tmp;
	std::map<std::string, int> M;
	std::vector<std::pair<std::string, int>> V;

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> tmp;
		M.insert({ tmp, 0 });
	}

	while (1)
	{
		std::cin >> tmp;

		if (std::cin.eof())
			break;

		M[tmp]++;
	}

	for (auto& K : M)
		V.push_back(K);

	std::sort(V.begin(), V.end(), cmp);

	for (auto& K : V)
		std::cout << K.first << ' ' << K.second << '\n';

	return 0;
}