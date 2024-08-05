#include <iostream>
#include <string>

int main()
{
	char alp;
	std::string S;

	while (1)
	{
		std::cin >> alp;

		if (alp == '#')
			break;
		else
		{
			int count = 0;

			std::getline(std::cin, S);
			for (int i = 0; i < S.size(); i++)
				if (alp == S[i] || alp == S[i] + ('a' - 'A'))
					count++;

			std::cout << alp << ' ' << count << '\n';
		}
	}
}