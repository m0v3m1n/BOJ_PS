#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::string S; std::cin >> S;

	if (S[0] != '0') // 10진수.
		std::cout << S;
	else
	{
		if (S.length() > 2 && S[1] == 'x') // 16진수.
		{
			std::string N = S.substr(2, S.length() - 2);

			int n = 0;

			for (int i = N.length() - 1; i >= 0; i--)
			{
				if (N[i] >= '0' && N[i] <= '9')
					n += (N[i] - '0') * std::pow(16, -i + N.length() - 1);
				else
					n += (10 + N[i] - 'a') * std::pow(16, -i + N.length() - 1);
			}

			std::cout << n;
		}
		else // 8진수.
		{
			std::string N = S.substr(1, S.length() - 1);

			int n = 0;

			for (int i = N.length() - 1; i >= 0; i--)
					n += (N[i] - '0') * std::pow(8, -i + N.length() - 1);

			std::cout << n;
		}
	}
}
