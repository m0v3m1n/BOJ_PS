#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::string S;
	std::cin >> N >> S;

	while (1)
	{
		if (S.find("PS4") != std::string::npos)
			S.erase(S.begin() + S.find("PS4") + 2);
		else if (S.find("PS5") != std::string::npos)
			S.erase(S.begin() + S.find("PS5") + 2);
		else
			break;
	}

	std::cout << S;
	return 0;
} 