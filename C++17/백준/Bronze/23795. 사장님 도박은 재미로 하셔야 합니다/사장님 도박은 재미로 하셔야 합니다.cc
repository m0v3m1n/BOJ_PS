#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	int sum = 0;
	while (1)
	{
		std::cin >> N;

		if (N == -1)
			break;
		else
			sum += N;
	}

	std::cout << sum;
}