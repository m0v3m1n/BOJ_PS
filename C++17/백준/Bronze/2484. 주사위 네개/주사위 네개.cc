#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::vector<int> money(N);
	std::vector<std::vector<int>> V(N, std::vector<int>(6));

	for (int i = 0; i < N; i++)
	{
		int tmp;
		for (int j = 0; j < 4; j++)
		{
			std::cin >> tmp;
			V[i][tmp - 1]++;
		}

		auto finding_4 = std::find(V[i].begin(), V[i].end(), 4);
		if (finding_4 != V[i].end())
		{
			money[i] = 50000 + ((finding_4 - V[i].begin()) + 1) * 5000;
			continue;
		}

		auto finding_3 = std::find(V[i].begin(), V[i].end(), 3);
		if (finding_3 != V[i].end())
		{
			money[i] = 10000 + ((finding_3 - V[i].begin()) + 1) * 1000;
			continue;
		}

		auto finding_2 = std::find(V[i].begin(), V[i].end(), 2);
		if (finding_2 != V[i].end())
		{
			auto finding_2_2 = std::find(finding_2 + 1, V[i].end(), 2);
			if (finding_2 != V[i].end() && finding_2_2 != V[i].end())
				money[i] = 2000 + ((finding_2 - V[i].begin()) + 1) * 500 + ((finding_2_2 - V[i].begin()) + 1) * 500;
			else if (finding_2 != V[i].end())
				money[i] = 1000 + ((finding_2 - V[i].begin()) + 1) * 100;
			continue;
		}

		int max = 0;
			for (int j = 0; j < 6; j++)
				if (V[i][j] == 1)
					max = j;
		money[i] = (max + 1) * 100;
	}

	int max = 0;
	for (int i = 0; i < N; i++)
		if (money[i] > max)
			max = money[i];

	std::cout << max;
	return 0;
}