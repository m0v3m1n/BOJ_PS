#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	for (int i = 0; i < 3; i++)
	{
		std::string S; std::cin >> S;

		int tmp_yeonsok = 1;
		int max_yeonsok = 1;

		for (int j = 1; j < S.size(); j++)
			if (S[j] == S[j - 1])
				tmp_yeonsok++;
			else
			{
				if (tmp_yeonsok > max_yeonsok)
					max_yeonsok = tmp_yeonsok;

				tmp_yeonsok = 1;
			}

		if (tmp_yeonsok > max_yeonsok)
			max_yeonsok = tmp_yeonsok;

		std::cout << max_yeonsok << '\n';
	}
}