#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool cmp(char a, char b)
{
	return a > b;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::vector<char> V;
	std::string S;

	std::cin >> S;
	for (int i = 0; i < S.size(); i++)
		V.push_back(S[i]);

	bool flag = false;
	int sum = 0;
	for (auto& K : V)
	{
		if (K == '0')
			flag = true;
		sum += K - '0';
	}

	if (sum % 3 == 0 && flag)
	{
		std::sort(V.begin(), V.end(), cmp);
		for (auto& K : V)
			std::cout << K;
	}
	else
		std::cout << -1;

	return 0;
}