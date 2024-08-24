#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, idx, s, total = 0;
	std::string S, sc;
	double score = 0.0, tmp_score;

	std::cin >> T; idx = T;

	while (idx--)
	{
		std::cin >> S >> s >> sc;

		tmp_score = 0.0;

		if (sc[0] == 'A')
			tmp_score += 4.0;
		else if (sc[0] == 'B')
			tmp_score += 3.0;
		else if (sc[0] == 'C')
			tmp_score += 2.0;
		else if (sc[0] == 'D')
			tmp_score += 1.0;
		else
		{
			total += s;
			continue;
		}

		if (sc[1] == '+')
			tmp_score += 0.3;
		else if (sc[1] == '-')
			tmp_score -= 0.3;

		score += (tmp_score * s);
		total += s;
	}

	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << (score / (double)total) + 0.000001;
}