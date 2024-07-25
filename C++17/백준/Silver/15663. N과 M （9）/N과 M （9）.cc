#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> arr, num, check;

void recursion(int M, int N, int len)
{
	if (len == N)
	{
		for (auto& K : arr)
			std::cout << K << ' ';
		std::cout << '\n';
	}

	int last = 0;

	for (int i = 0; i < M; i++)
	{
		if (check[i] == 0 && num[i] != last)
		{
			arr.push_back(num[i]);
			last = num[i];
			check[i] = 1;

			recursion(M, N, len + 1);

			check[i] = 0;
			arr.pop_back();
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int M, N, tmp;
	std::cin >> M >> N;

	for (int i = 0; i < M; i++)
	{
		std::cin >> tmp;
		num.push_back(tmp);
		check.push_back(0);
	}

	std::sort(num.begin(), num.end());
	recursion(M, N, 0);
}