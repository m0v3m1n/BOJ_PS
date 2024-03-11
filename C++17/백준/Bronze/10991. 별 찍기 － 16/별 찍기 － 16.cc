#include <iostream>

int main()
{
	int N; std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N - 1; j++)
			std::cout << ' ';
		for (int k = 0; k < i; k++)
			std::cout << "* ";
		std::cout << '*';

		if (i != N - 1)
			std::cout << '\n';
	}
}