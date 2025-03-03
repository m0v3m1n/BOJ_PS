#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;

	while (1)
	{
		std::cin >> N;
		if (!N)
			break;

		std::cin.ignore();
		std::vector<std::string> V(N);
		for (int i = 0; i < N; i++)
			std::getline(std::cin, V[i]);

		//for (auto& K : V)
		//	std::cout << K << '\n';

		int row_index = 0;
		int column_index = 0;

		while (V[row_index][column_index] == ' ')
			column_index++;

		while (row_index < N)
		{
			if (V[row_index].length() < column_index)
				row_index++;
			if (row_index == N)
				break;

			if (V[row_index].length() <= column_index || V[row_index][column_index] == ' ')
				row_index++;
			else
				column_index++;
		}

		std::cout << column_index + 1 << '\n';
	}
	return 0;
}