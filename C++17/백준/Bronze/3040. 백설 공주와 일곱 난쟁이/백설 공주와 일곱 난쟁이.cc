#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int height[9];
	for (int i = 0; i < 9; i++)
		std::cin >> height[i];

	for (int i = 0; i < 3; i++)
		for (int j = i + 1; j < 4; j++)
			for (int k = j + 1; k < 5; k++)
				for (int l = k + 1; l < 6; l++)
					for (int m = l + 1; m < 7; m++)
						for (int n = m + 1; n < 8; n++)
							for (int o = n + 1; o < 9; o++)
								if (height[i] + height[j] + height[k] + height[l] + height[m] + height[n] + height[o] == 100)
									std::cout << height[i] << '\n' << height[j] << '\n' << height[k] << '\n' << height[l] << '\n' << height[m] << '\n' << height[n] << '\n' << height[o];
}