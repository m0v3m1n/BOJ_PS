#include <iostream>
#include <algorithm>
#include <string>

int main()
{
	std::string S;
	long long LL;
	
	std::cin >> LL;

	while (LL)
	{
		if (LL % 2 == 0)
			S.push_back('0');
		else
			S.push_back('1');

		LL /= 2;
	}

	std::reverse(S.begin(), S.end());
	std::cout << S;
}
