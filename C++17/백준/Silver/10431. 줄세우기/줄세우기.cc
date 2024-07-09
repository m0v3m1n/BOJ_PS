#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int P, T = 1; std::cin >> P;

	int footstep, tmp, idx;
	std::vector<int> height;

	while (P--)
	{
		std::cin >> T;
		footstep = 0;
		height.clear();

		for (int i = 0; i < 20; i++)
		{
			std::cin >> tmp;

			if (height.size() == 0)
				height.push_back(tmp);
			else
			{
				idx = height.size();
				for (int j = height.size() - 1; j >= 0; j--)
					if (height[j] > tmp)
						idx = j; // 가장 앞에 있는 idx 구하기.

				footstep += (height.size() - idx);
				height.insert(height.begin() + idx, tmp);
			}
		}
		std::cout << T << ' ' << footstep << '\n';
	}
}