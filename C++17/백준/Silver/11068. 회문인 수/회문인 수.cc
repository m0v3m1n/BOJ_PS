#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool make_i_jinbub(int n, int i)
{
	bool flag = true;
	std::vector<int> for_return;

	while (n != 0)
	{
		for_return.push_back(n % i);
		n /= i;
	}

	for (int i = 0; i < for_return.size(); i++)
		if (for_return[i] != for_return[for_return.size() - i - 1])
			return false;

	return true;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N;  std::cin >> T;

	while (T--)
	{
		std::cin >> N;

		for (int i = 2; i <= 65; i++)
			if (i == 65)
				std::cout << 0 << '\n';
			else
				if (make_i_jinbub(N, i))
				{
					std::cout << 1 << '\n';
					break;
				}
	}
}