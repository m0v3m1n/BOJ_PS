#include <iostream>

int main()
{
	int N; std::cin >> N;

	if (N == 1)
		std::cout << 1;
	else if (N < 4)
		std::cout << 2;
	else if (N < 8)
		std::cout << 4;
	else if (N < 16)
		std::cout << 8;
	else if (N < 32)
		std::cout << 16;
	else if (N < 64)
		std::cout << 32;
	else
		std::cout << 64;
}