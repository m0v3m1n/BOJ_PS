#include <iostream>
#include <vector>

int main()
{
	std::string S; std::cin >> S;
	std::vector<int> DP(S.length() + 1, 0);

	if (S == "0")
	{
		std::cout << 0;
		return 0;
	}

	DP[0] = 1;

	for (int i = 1; i <= S.length(); i++)
	{
		int cur = S[i - 1] - '0';

		if (1 <= cur && cur <= 9)
			DP[i] = (DP[i - 1] + DP[i]) % 1000000;

		if (i == 1)
			continue;

		int last = S[i - 2] - '0';

		last = last * 10 + cur;

		if (10 <= last && last <= 26)
			DP[i] = (DP[i - 2] + DP[i]) % 1000000;
	}

	std::cout << DP[S.length()];
	return 0;
}