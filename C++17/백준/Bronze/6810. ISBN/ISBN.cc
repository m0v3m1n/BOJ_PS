#include <iostream>

int main()
{
	int sum = 91;

	int f, s, t;
	std::cin >> f >> s >> t;

	sum += (f * 1) + (s * 3) + (t * 1);
	std::cout << "The 1-3-sum is " << sum;
}