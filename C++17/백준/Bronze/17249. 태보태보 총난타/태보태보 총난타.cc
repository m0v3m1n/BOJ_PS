#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	bool flag = true;
	int left = 0, right = 0;
	std::string S; std::cin >> S;

	for (auto& K : S)
	{
		if (K == '(')
			flag = false;

		if (K == '@')
			if (flag)
				left++;
			else
				right++;
	}

	std::cout << left << ' ' << right;
	return 0;
}