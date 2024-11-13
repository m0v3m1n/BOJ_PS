#include <iostream>
#include <string>

int main()
{
	int N; std::cin >> N;

	if (N % 14 == 1 || N % 14 == 13)
		std::cout << "baby";
	else if (N % 14 == 2 || N % 14 == 0)
		std::cout << "sukhwan";
	else if (N % 14 == 3 || N % 14 == 7 || N % 14 == 11)
		if (N / 14 > 2)
			std::cout << "tu+" << "ru*" << 2 + (N / 14);
		else
		{
			std::cout << "tururu";
			for (int i = 0; i < N / 14; i++)
				std::cout << "ru";
		}
	else if (N % 14 == 4 || N % 14 == 8 || N % 14 == 12)
		if (N / 14 > 3)
			std::cout << "tu+" << "ru*" << 1 + (N / 14);
		else
		{
			std::cout << "turu";
			for (int i = 0; i < N / 14; i++)
				std::cout << "ru";
		}
	else if (N % 14 == 5)
		std::cout << "very";
	else if (N % 14 == 6)
		std::cout << "cute";
	else if (N % 14 == 9)
		std::cout << "in";
	else if (N % 14 == 10)
		std::cout << "bed";
}