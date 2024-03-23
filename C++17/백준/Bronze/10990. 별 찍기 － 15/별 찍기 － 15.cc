#include <iostream>
#include <string>

int main()
{
	int N; std::cin >> N;

	for (int i = 0; i < N - 1; i++)
		std::cout << ' ';
	std::cout << '*' << '\n';

	for (int i = 1; i < N; i++)
	{
		for (int j = i; j < N - 1; j++)
			std::cout << ' ';
		std::cout << '*';

		for (int j = 0; j < i * 2 - 1; j++)
			std::cout << ' ';
		std::cout << '*' << '\n';
	}
}