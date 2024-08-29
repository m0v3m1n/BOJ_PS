#include <iostream>
#include <vector>

int main()
{
	int A = 0, B = 0;

	std::vector<int> a(10), b(10);
	for (int i = 0; i < 10; i++)
		std::cin >> a[i];
	for (int i = 0; i < 10; i++)
		std::cin >> b[i];

	for(int i = 0; i < 10; i++)
		if (a[i] == b[i])
		{
			A++;
			B++;
		}
		else
			a[i] > b[i] ? A += 3 : B += 3;

	std::cout << A << ' ' << B << '\n';

	if (A != B)
		std::cout << (A > B ? 'A' : 'B');
	else
	{
		for (int i = 9; i >= 0; i--)
			if (a[i] > b[i])
			{
				std::cout << 'A';
				return 0;
			}
			else if (a[i] < b[i])
			{
				std::cout << 'B';
				return 0;
			}
		std::cout << 'D';
	}
	return 0;
}