#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int n;
	std::string N;

	while (1)
	{
		std::cin >> N;

		if (N == "0")
			break;
		else
		{
			std::cout << N << ' ';

			while (N.length() > 1)
			{
				n = 1;

				for (auto& K : N)
					n *= K - '0';


				N = std::to_string(n);

				std::cout << N << ' ';
			}

			std::cout << '\n';
		}
	}

	return 0;
}