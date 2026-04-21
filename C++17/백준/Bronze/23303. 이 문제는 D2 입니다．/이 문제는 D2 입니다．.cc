#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S;
	std::getline(std::cin, S);

	for (int i = 0; i < S.length() - 1; i++)
		if ((S[i] == 'D' || S[i] == 'd') && S[i + 1] == '2')
		{
			std::cout << "D2";
			return 0;
		}

	std::cout << "unrated";
	return 0;
}