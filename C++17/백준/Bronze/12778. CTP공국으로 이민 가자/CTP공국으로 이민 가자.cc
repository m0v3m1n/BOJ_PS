#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int T, N, int_tmp;
	char C, char_tmp;

	std::cin >> T;
	while (T--)
	{
		std::cin >> N >> C;

		if(C == 'C')
			for (int i = 0; i < N; i++)
			{
				std::cin >> char_tmp;
				std::cout << char_tmp - 'A' + 1 << ' ';
			}
		else // N
			for (int i = 0; i < N; i++)
			{
				std::cin >> int_tmp;
				std::cout << char(int_tmp + 'A' - 1) << ' ';
			}

		std::cout << '\n';
	}
	return 0;
}