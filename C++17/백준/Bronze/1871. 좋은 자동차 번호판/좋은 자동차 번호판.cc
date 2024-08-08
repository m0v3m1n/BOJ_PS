#pragma warning(disable:4996)
#include <iostream>

int main()
{
	char a, b, c, cut; int N, num; std::scanf("%d", &N);

	while (N--)
	{
		std::scanf("%c%c%c%c-%d", &cut, &a, &b, &c, &num);
		int diff = (a - 'A') * 26 * 26 + (b - 'A') * 26 + (c - 'A') - num;

		if (-100 <= diff && diff <= 100)
			std::cout << "nice\n";
		else
			std::cout << "not nice\n";
	}
	return 0;
}