#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N;
	std::string cur, tar;

	std::cin >> T;
	while (T--)
	{
		std::cin >> N;
		std::cin >> cur >> tar;

		int cnt = 0;
		int len = cur.length();
		int WtoB = 0, BtoW = 0;
		// WtoB는 현재가 W일 때 목표가 B, BtoW는 현재가 B일 때 목표가 W

		for (int i = 0; i < len; i++)
		{
			if (cur[i] == 'W' && tar[i] == 'B')
				WtoB++;
			else if (cur[i] == 'B' && tar[i] == 'W')
				BtoW++;
		}

		std::cout << (WtoB > BtoW ? WtoB : BtoW) << '\n';
	}

	return 0;
}