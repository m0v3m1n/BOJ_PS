#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::cout << "int a;" << '\n';

	for (int i = 0; i < N; i++)
	{
		std::cout << "int ";
		for (int j = 0; j <= i; j++)
			std::cout << '*';

		if (i == 0)
			std::cout << "ptr = &a;" << '\n';
		else if (i == 1)
			std::cout << "ptr2 = &ptr;" << '\n';
		else
			std::cout << "ptr" << i + 1 << " = &ptr" << i << ';' << '\n';
	}

	return 0;
}