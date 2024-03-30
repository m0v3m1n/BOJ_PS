#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, T;
	bool flag = false;

	std::vector<int> V;
	for (int i = 1; i < 46; i++)
		V.push_back((i * (i + 1)) / 2);

	//for (auto& K : V)
	//	std::cout << K << ' ';

	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		flag = false;
		std::cin >> T;

		for (int j = 0; j < 45; j++)
			for (int k = 0; k < 45; k++)
				for (int l = 0; l < 45; l++)
					if (V[j] + V[k] + V[l] == T)
						flag = true;

		if (flag)
			std::cout << 1 << '\n';
		else
			std::cout << 0 << '\n';
	}

	return 0;
}