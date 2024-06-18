#include <iostream>
#include <cmath>

int main()
{
	int N, W, H, s;
	std::cin >> N >> W >> H;

	for (int i = 0; i < N; i++)
	{
		std::cin >> s;

		if (s <= W || s <= H || s <= sqrt((W * W + H * H)))
			std::cout << "DA\n";
		else
			std::cout << "NE\n";
	}

	return 0;
}