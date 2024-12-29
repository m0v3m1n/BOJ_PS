#include <iostream>

int main()
{
	int N, M; std::cin >> N >> M;

	if (N == 1)
		std::cout << 1;
	else if (N == 2)
		std::cout << ((M + 1) / 2 < 4 ? (M + 1) / 2 : 4);
	else if (M < 7)
		std::cout << (M < 4 ? M : 4);
	else
		std::cout << M - 2;
}