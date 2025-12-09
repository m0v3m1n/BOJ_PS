#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T;
	std::cin >> T;
	std::cin.ignore();

	while (T--)
	{
		int score = 0;

		std::string S;
		std::getline(std::cin, S);

		for (auto& K : S)
			if ('A' <= K && K <= 'Z')
				score += K - 'A' + 1;

		if (score == 100)
			std::cout << "PERFECT LIFE" << '\n';
		else
			std::cout << score << '\n';
	}
	return 0;
}