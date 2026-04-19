#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S;
	bool flags[3] = { false, };

	for (int i = 0; i < 3; i++)
	{
		std::cin >> S;

		if (S[0] == 'l')
			flags[0] = 1;
		else if (S[0] == 'k')
			flags[1] = 1;
		else if (S[0] == 'p')
			flags[2] = 1;
		else
			continue;
	}

	if (flags[0] && flags[1] && flags[2])
		std::cout << "GLOBAL";
	else
		std::cout << "PONIX";

	return 0;
}