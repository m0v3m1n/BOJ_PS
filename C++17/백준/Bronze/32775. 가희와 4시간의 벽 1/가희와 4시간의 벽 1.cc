#include <iostream>

int main()
{
	int S, F; std::cin >> S >> F;
	if (S <= F)
		std::cout << "high speed rail";
	else
		std::cout << "flight";
}