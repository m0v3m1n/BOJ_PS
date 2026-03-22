#include <iostream>

int main()
{
	int a, b, res = 1, sum = 0;
	std::cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= i; j++)
			sum += j;

		res = (res * sum) % 14579;
		sum = 0;
	}
	std::cout << res;
	return 0;
}