#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	std::vector<int> V(7);
	for (int i = 0; i < 7; i++)
		std::cin >> V[i];
	for(int i = 6; i > 0; i--)
		for(int j = 0; j < i; j++)
			if (V[j] > V[j + 1])
			{
				int tmp = V[j];
				V[j] = V[j + 1];
				V[j + 1] = tmp;
			}

	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
			for (int k = j + 1; k < 6; k++)
				if (V[i] + V[j] + V[k] == V[6])
					std::cout << V[i] << ' ' << V[j] << ' ' << V[k];

	return 0;
}