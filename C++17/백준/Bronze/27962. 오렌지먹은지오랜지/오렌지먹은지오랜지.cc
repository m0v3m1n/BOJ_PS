#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, cnt; std::cin >> N;
	std::string S; std::cin >> S;

	for (int i = 1; i <= N; i++)
	{
		std::string tmp1, tmp2;
		tmp1 = S.substr(0, i);
		tmp2 = S.substr(N - i, i);

		cnt = 0;
		for (int i = 0; i < tmp1.size(); i++)
			if (tmp1[i] != tmp2[i])
				cnt++;

		if (cnt == 1)
		{
			std::cout << "YES";
			return 0;
		}
	}

	std::cout << "NO";
	return 0;
}