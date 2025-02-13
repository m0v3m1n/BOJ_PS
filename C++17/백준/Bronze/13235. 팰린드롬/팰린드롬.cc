#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S;
	std::cin >> S;

	for(int i = 0; i < S.length() / 2; i++)
		if (S[i] != S[S.length() - i - 1])
		{
			std::cout << "false";
			return 0;
		}

	std::cout << "true";
	return 0;
}