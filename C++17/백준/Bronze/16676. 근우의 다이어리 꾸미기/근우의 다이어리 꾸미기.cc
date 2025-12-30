#include <iostream>

int main()
{
	int N, cardPack = 10, max = 1111111111;

	std::cin >> N;

	if (!N) // N이 0이면
		std::cout << 1;
	else
	{
		while (max > N)
		{
			cardPack--;
			max /= 10;
		}

		std::cout << cardPack;
	}
}