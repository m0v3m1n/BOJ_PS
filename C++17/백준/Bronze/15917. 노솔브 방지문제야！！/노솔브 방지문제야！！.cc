#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int Q;
	std::cin >> Q;

	for (int i = 0; i < Q; i++)
	{
		int a;
		std::cin >> a;

		if ((a & (-a)) == a)
			std::cout << 1 << '\n';
		else
			std::cout << 0 << '\n';
	}

	return 0;
}