#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N, sum = 0; std::cin >> N;

	std::vector<int> V(N), odd;
	for (int i = 0; i < N; i++)
	{
		std::cin >> V[i];
		if (V[i] % 2)
			odd.push_back(V[i]);
		sum += V[i];
	}

	if (N == 1 && odd.size() == 1)
		std::cout << 0;
	else
	{
		std::sort(odd.begin(), odd.end());

		if (sum % 2)
			std::cout << sum - odd[0];
		else
			std::cout << sum;
	}
}