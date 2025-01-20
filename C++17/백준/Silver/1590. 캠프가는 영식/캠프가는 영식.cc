#include <iostream>
#include <climits>
#include <cmath>
#include <algorithm>

int main()
{
	bool flag = false;
	int N, start, min = INT_MAX;; std::cin >> N >> start;

	for (int i = 0; i < N; i++)
	{
		int B_start, B_interval, B_quantity;
		std::cin >> B_start >> B_interval >> B_quantity;

		for (int j = 0; j < B_quantity; j++)
			if (B_start + B_interval * j >= start 
				&& std::abs((B_start + B_interval * j) - start) < min)
				min = std::abs((B_start + B_interval * j) - start);
	}

	std::cout << (min == INT_MAX ? -1 : min);
}
