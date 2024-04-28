#include <iostream>
#include <set>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::set<std::string> S;
	int N;
	std::string str;

	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> str;
		S.insert(str);
	}

	for (auto& K : S)
	{
		std::string rev = "";
		for (int i = K.size() - 1; i >= 0; i--)
			rev += K[i];

		if (S.find(rev) == S.end())
			continue;
		else
		{
			std::cout << rev.size() << ' ' << rev[rev.size() / 2];
			break;
		}
	}

	return 0;
}