#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;
	int month[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	while (T--)
	{
		int count = 0;
		int num[10] = { 0, };
		for (int i = 0; i < 10; i++)
			std::cin >> num[i];

		for (int i = 1; i <= 12; i++)
		{
			for (int j = 1; j <= month[i - 1]; j++)
			{
				bool flag_1 = false;
				bool flag_2 = false;

				for (int k = 0; k < 10; k++)
					if (num[k] && std::to_string(i).find(k + '0') != std::string::npos)
						flag_1 = true;

				for (int k = 0; k < 10; k++)
					if (num[k] && std::to_string(j).find(k + '0') != std::string::npos)
						flag_2 = true;

				if (!flag_1 && !flag_2)
					count++;
			}
		}
		
		std::cout << count << '\n';
	}
	return 0;
}