#include <iostream>

int main()
{
	int e, f, b, c, sum = 0; std::cin >> e >> f >> c;

	b = e + f;

	while (b / c) // 나누었을 때 1 이상 --> 새 병 생김.
	{
		sum += b / c;
		
		e = b % c;
		f = b / c;

		b = e + f;
	}

	std::cout << sum;
}
