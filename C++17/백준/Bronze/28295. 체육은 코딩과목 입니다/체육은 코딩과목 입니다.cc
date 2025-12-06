#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int tmp, N = 0;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> tmp;
		N += tmp;
	}

	if (N % 4 == 0)
		std::cout << "N";
	else if (N % 4 == 1)
		std::cout << "E";
	else if (N % 4 == 2)
		std::cout << "S";
	else
		std::cout << "W";

	return 0;
}