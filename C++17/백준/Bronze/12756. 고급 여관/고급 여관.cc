#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int Ao, Ad, Bo, Bd;
	std::cin >> Ao >> Ad >> Bo >> Bd;

	while (Ad > 0 && Bd > 0)
	{
		Ad -= Bo;
		Bd -= Ao;

		if (Ad > 0 && Bd > 0)
			continue;
		else if (Ad > 0) // Bo <= 0
			std::cout << "PLAYER A";
		else if (Bd > 0)
			std::cout << "PLAYER B";
		else
			std::cout << "DRAW";
	}

	return 0;
}