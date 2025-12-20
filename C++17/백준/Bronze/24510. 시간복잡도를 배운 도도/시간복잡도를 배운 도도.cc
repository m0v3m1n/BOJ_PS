#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, cnt, max = 0;
	std::string S;

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		cnt = 0;
		std::cin >> S;

		for (int j = 0; j < S.length(); j++)
		{
			if (S[j] == 'f' && S.length() - j >= 3)
				if (S[j + 1] == 'o' && S[j + 2] == 'r')
					cnt++;
				else
					continue;
			else if (S[j] == 'w' && S.length() - j >= 5)
				if (S[j + 1] == 'h' && S[j + 2] == 'i' && S[j + 3] == 'l' && S[j + 4] == 'e')
					cnt++;
				else
					continue;
			else
				continue;
		}

		if (cnt > max)
			max = cnt;
	}

	std::cout << max;
	return 0;
}