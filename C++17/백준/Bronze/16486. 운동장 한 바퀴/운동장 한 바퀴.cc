#include <iostream>

int main()
{
	double A, B, d1, d2;
	std::cin >> d1 >> d2;
	
	std::cout << std::fixed;
	std::cout.precision(7);
	std::cout << (2 * d1) + (2 * d2 * 3.141592);
}