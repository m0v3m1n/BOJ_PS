#include <iostream>

int main()
{
	int scn = 1, O = 1, W = 1, n, flag;
	char act;
	
	while (1)
	{
		std::cin >> O >> W;
		if (!O && !W)
			break;

		flag = 1;

		while (1)
		{
			std::cin >> act >> n;
			if (act == '#' && n == 0)
				break;

			if (flag)
			{
				if (act == 'E')
					if (W > n)
						W -= n;
					else
					{
						W = 0;
						flag = 0;
					}
				else
					W += n;
			}
		}

		if (W == 0)
			std::cout << scn << ' ' << "RIP" << '\n';
		else if (O / 2 < W && W < O * 2)
			std::cout << scn << ' ' << ":-)" << '\n';
		else
			std::cout << scn << ' ' << ":-(" << '\n';

		scn++;
	}

	return 0;
}