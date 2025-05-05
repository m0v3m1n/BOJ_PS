#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, count = 0; std::cin >> N;

	for (int a = 1; a <= 500; a++)
		for (int b = 1; b <= a; b++)
			if (a * a == (b * b) + N)
				count++;

	std::cout << count;

	return 0;
}