#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int tmp, count = 0;
	while(std::cin >> tmp)
	{
		if (tmp > 0)
			count++;
	}

	std::cout << count;
	return 0;
} 