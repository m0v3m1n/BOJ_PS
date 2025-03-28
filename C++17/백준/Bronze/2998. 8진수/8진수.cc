#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S; std::cin >> S;
	while (S.length() % 3 != 0)
		S.insert(S.begin(), '0');

	for (int i = 0; i < S.length(); i += 3)
	{
		std::string s;
		s += S[i];  s += S[i + 1]; s += S[i + 2];

		if (s == "000")
			std::cout << 0;
		else if (s == "001")
			std::cout << 1;
		else if (s == "010")
			std::cout << 2;
		else if (s == "011")
			std::cout << 3;
		else if (s == "100")
			std::cout << 4;
		else if (s == "101")
			std::cout << 5;
		else if (s == "110")
			std::cout << 6;
		else if (s == "111")
			std::cout << 7;
	}

	return 0;
}