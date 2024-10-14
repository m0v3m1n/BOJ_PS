#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int tmp;
	std::vector<int> V;

	while (1)
	{
		std::cin >> tmp;

		if (tmp == -1)
			break;
		else if (tmp == 0)
		{
			std::sort(V.begin(), V.end());
			int sum = 0;

			for (int i = 0; i < V.size() - 1; i++)
				for (int j = i + 1; j < V.size(); j++)
					if (V[j] == V[i] * 2)
					{
						sum++;
						break;
					}
					else if (V[j] > V[i] * 2)
						break;

			std::cout << sum << '\n';
			V.clear();
		}
		else
			V.push_back(tmp);
	}
	return 0;
}