#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int min = 999;
	std::string A, B; std::cin >> A >> B;

	for (int i = 0; i <= B.size() - A.size(); i++)
	{
		int count = 0;

		for (int k = 0; k < A.size(); k++)
			if (B[k + i] != A[k])
				count++;

		min = min < count ? min : count;
	}
	std::cout << min;
	return 0;
}