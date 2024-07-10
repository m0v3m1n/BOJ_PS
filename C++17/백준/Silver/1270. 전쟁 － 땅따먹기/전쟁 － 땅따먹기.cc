#include <iostream>
#include <map>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N, T, tmp;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> T;

		std::map<long long, long long> M;
		bool flag = false;

		for (int j = 0; j < T; j++)
		{
			std::cin >> tmp;

			if (M.find(tmp) == M.end())
				M.insert(std::pair<long long, long long>(tmp, 1));
			else
				M[tmp]++;
		}

		for (auto K = M.begin(); K != M.end(); K++)
			if (K->second > (T / 2))
			{
				std::cout << K->first << '\n';
				flag = true;
				break;
			}

		if (flag == false)
			std::cout << "SYJKGW" << '\n';
	}

	return 0;
}