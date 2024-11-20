#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	std::vector<int> V, sorted;
	int N, P; std::cin >> N >> P;
	V.push_back(N); sorted.push_back(N);

	while (1)
	{
		int tmp_i1 = V[V.size() - 1], tmp_i2, sum = 0;
		std::string tmp_s = std::to_string(tmp_i1);

		for (int i = 0; i < tmp_s.size(); i++)
		{
			tmp_i2 = 1;
			for (int j = 0; j < P; j++)
				tmp_i2 *= (tmp_s[i] - '0');
			sum += tmp_i2;
		}

		if (std::binary_search(sorted.begin(), sorted.end(), sum))
		{
			for (int i = 0; i < V.size(); i++)
				if (V[i] == sum)
				{
					std::cout << i;
					return 0;
				}
		}
		else
		{
			V.push_back(sum);
			sorted.push_back(sum);
			std::sort(sorted.begin(), sorted.end());
		}
	}
}