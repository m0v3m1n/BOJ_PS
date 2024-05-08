#include <iostream>
#include <vector>
#include <algorithm>

int lower_bound(int value, std::vector<int> V)
{
	int left = 0, right = V.size(), mid;

	while (left < right)
	{
		mid = (right + left) / 2;

		if (value <= V[mid])
			right = mid;
		else
			left = mid + 1;
	}

	return right;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, A, B, sum;

	std::cin >> T;
	while (T--)
	{
		sum = 0;
		std::cin >> A >> B;
		std::vector<int> Va(A), Vb(B);

		for (int i = 0; i < A; i++)
			std::cin >> Va[i];
		for (int i = 0; i < B; i++)
			std::cin >> Vb[i];

		std::sort(Va.begin(), Va.end());
		std::sort(Vb.begin(), Vb.end());

		for (int i = 0; i < A; i++)
			sum += lower_bound(Va[i], Vb);

		std::cout << sum << '\n';
	}
}