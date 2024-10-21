#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, count, len = 0, idx = 0;
	std::string S, tmp, res = "";

	std::string SaaS[] = { 
		"000000", "001111", 
		"010011", "011100", 
		"100110", "101001", 
		"110101", "111010" };

	std::cin >> N >> S;

	for (int i = 0; i < N; i++)
	{
		tmp = "";
		for (int j = i * 6; j < (i * 6) + 6; j++)
			tmp += S[j];

		len = res.size();

		for (int k = 0; k < 8; k++)
		{
			count = 0;

			for (int l = 0; l < 6; l++)
				if (SaaS[k][l] != tmp[l])
					count++;

			if (count == 0 || count == 1)
			{
				res += 'A' + k;
				break;
			}
		}

		if (len == res.size()) // 추가되지 않았음 --> 두 개 이상 틀림
		{
			std::cout << i + 1;
			return 0;
		}
	}

	std::cout << res;
	return 0;
}