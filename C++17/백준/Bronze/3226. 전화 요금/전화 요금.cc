#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int N, sum = 0; std::cin >> N;

	while (N--)
	{
		int h, m, d;
		std::string HM, D;

		std::cin >> HM >> D;
		h = std::stoi(HM.substr(0, 2));
		m = std::stoi(HM.substr(3, 2));
		d = std::stoi(D);

		while (d--)
		{
			if (h >= 7 && h < 19)
				sum += 10;
			else
				sum += 5;

			m++;
			if (m == 60)
			{
				h++;
				m = 0;
			}
			if (h == 24)
				h = 0;
		}
	}

	std::cout << sum;
	return 0;
}