#include <iostream>
#include <vector>

int GCD(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}

int main()
{
	int N, first_circle, circle; std::cin >> N >> first_circle;

	std::vector<int> V(N - 1);
	for (int i = 0; i < N - 1; i++)
	{
		std::cin >> circle;
		int rotate = GCD(first_circle, circle);

		std::cout << first_circle / rotate << '/' << circle / rotate << '\n';
	}

	return 0;
}