#include <iostream>

int main(void) {

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, B, H, W, min = 500001; std::cin >> N >> B >> H >> W;
	int money_forEachPerson, capacity;

	for (int i = 0; i < H; i++)
	{
		std::cin >> money_forEachPerson;

		for (int j = 0; j < W; j++)
		{
			std::cin >> capacity;
			if (capacity >= N && money_forEachPerson * N <= B)
				if (money_forEachPerson * N < min)
					min = money_forEachPerson * N;
		}
	}

	if (min == 500001)
		std::cout << "stay home";
	else
		std::cout << min;
}
