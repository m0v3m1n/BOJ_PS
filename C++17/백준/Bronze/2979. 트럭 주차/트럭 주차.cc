#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int A, B, C, sum = 0, arrived, leaved;
	std::vector<int> V(101, 0);

	std::cin >> A >> B >> C;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> arrived >> leaved;
		for (int ii = arrived; ii < leaved; ii++)
			V[ii]++;
	}

	for (int i = 1; i < 101; i++)
		if (V[i] == 1)
			sum += A;
		else if (V[i] == 2)
			sum += (B * 2);
		else if (V[i] == 3)
			sum += (C * 3);

	std::cout << sum;
	return 0;
}