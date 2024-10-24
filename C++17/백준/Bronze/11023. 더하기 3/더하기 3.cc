#include <iostream>

int main()
{
	int sum = 0, tmp;
	while (std::cin >> tmp)
		sum += tmp;
	std::cout << sum;
}