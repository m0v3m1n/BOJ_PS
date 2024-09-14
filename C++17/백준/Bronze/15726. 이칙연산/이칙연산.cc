#include <iostream>

int main()
{
	double a, b, c;
	std::cin >> a >> b >> c;

	std::cout << (int)std::max((a * b / c), (a / b * c));

	return 0;
}