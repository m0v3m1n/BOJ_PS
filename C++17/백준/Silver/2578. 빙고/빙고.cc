#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<std::pair<int, bool>>> V(5, std::vector <std::pair<int, bool>>(5, std::make_pair(0, false)));

bool check()
{
	int lines = 0;

	for (int i = 0; i < 5; i++)
	{
		// 가로 췤!!!!
		if (V[i][0].second == true && V[i][1].second == true &&
			V[i][2].second == true && V[i][3].second == true && V[i][4].second == true)
			lines++;

		// 세로 췤!!!!
		if (V[0][i].second == true && V[1][i].second == true &&
			V[2][i].second == true && V[3][i].second == true && V[4][i].second == true)
			lines++;
	}

	// 대각 췤!!!!
	if (V[0][0].second == true && V[1][1].second == true &&
		V[2][2].second == true && V[3][3].second == true && V[4][4].second == true)
		lines++;

	if (V[0][4].second == true && V[1][3].second == true &&
		V[2][2].second == true && V[3][1].second == true && V[4][0].second == true)
		lines++;

	if (lines >= 3)
		return true;
	else
		return false;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int num;

	for (int i = 0; i < 5; i++)
		for (int ii = 0; ii < 5; ii++)
			std::cin >> V[i][ii].first;

	for (int i = 0; i < 25; i++)
	{
		std::cin >> num;

		for (int ii = 0; ii < 5; ii++)
		{
			auto K = std::find(V[ii].begin(), V[ii].end(), std::make_pair(num, false));

			if (K != V[ii].end()) // 찾았으면?
				K->second = true;
		}

		if (check())
		{
			std::cout << i + 1;
			return 0;
		}
	}
}