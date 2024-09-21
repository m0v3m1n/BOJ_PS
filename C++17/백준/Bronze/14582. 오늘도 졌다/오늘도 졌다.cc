#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	bool flag = false;
	int o_sum = 0, s_sum = 0;
	std::vector<int> O(9), S(9);

	for (int i = 0; i < 9; i++)
		std::cin >> O[i];

	for (int i = 0; i < 9; i++)
		std::cin >> S[i];

	for (int i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			if (flag == true)
				std::cout << "Yes";
			else
				std::cout << "No";
			return 0;
		}

		o_sum += O[i];

		if (o_sum > s_sum)
			flag = true;

		s_sum += S[i];
	}
}