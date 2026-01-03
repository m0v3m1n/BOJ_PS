#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, num, sum;
	std::cin >> N;

	while (N--)
	{
		std::cin >> num;
		std::vector<int> divided;
		sum = 0;

		for (int i = 1; i <= (num / 2); i++)
			if (num % i == 0)
				divided.push_back(i);

		for (auto& K : divided)
			sum += K;

		if (num == sum)
			std::cout << "Perfect" << '\n';
		else if (num > sum)
			std::cout << "Deficient" << '\n';
		else
			std::cout << "Abundant" << '\n';
	}

	return 0;
}