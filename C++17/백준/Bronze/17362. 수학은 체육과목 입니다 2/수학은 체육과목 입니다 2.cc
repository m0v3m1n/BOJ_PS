#include <iostream>
int main()
{
	int K; std::cin >> K; K %= 8;
	std::cout << (K > 5 || K == 0 ? (10 - K) % 8 : K);
}