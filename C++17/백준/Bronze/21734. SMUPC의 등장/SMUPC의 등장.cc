#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S; std::cin >> S;
	for (int i = 0; i < S.length(); i++)
	{
		int len = (int)S[i] / 100 + ((int)S[i] % 100) / 10 + (int)S[i] % 10;

		for (int j = 0; j < len; j++)
			std::cout << S[i];

		std::cout << '\n';
	}
	return 0;
}