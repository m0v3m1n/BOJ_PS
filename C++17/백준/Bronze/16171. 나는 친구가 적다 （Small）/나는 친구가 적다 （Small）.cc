#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string s, ss; std::cin >> s >> ss;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			s.erase(s.begin() + i);
			i--;
		}
	}

	if (s.find(ss) == std::string::npos)
		std::cout << 0;
	else
		std::cout << 1;
	return 0;
}