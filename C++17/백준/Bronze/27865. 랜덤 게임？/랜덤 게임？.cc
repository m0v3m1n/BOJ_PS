#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	char c;
	
	std::cin >> N;

	while (1)
	{
		std::cout << "? 1" << '\n';
		std::cout << std::flush;

		std::cin >> c;

		if (c == 'Y')
		{
			std::cout << "! 1";
			std::cout << std::flush;

			return 0;
		}
	}

	return 0;
}