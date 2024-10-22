#include <iostream>

int main()
{
	int A, B, C;
	std::cin >> A >> B >> C;
	std::cout << (C % 2 == 0 ? A : A ^ B);
	return 0;
}