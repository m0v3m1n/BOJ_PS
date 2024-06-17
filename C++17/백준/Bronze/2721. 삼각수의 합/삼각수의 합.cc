#include <iostream>

int main()
{
	int N, num, sum, tri; std::cin >> N;
	while (N--)
	{
		sum = 0, tri = 1;
		std::cin >> num;

		for (int i = 1; i <= num; i++)
		{
			tri += (i + 1);
			sum += (i * tri);
		}

		std::cout << sum << '\n';
	}
}