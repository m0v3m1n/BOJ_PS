#include <iostream>
#include <regex>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::regex pattern("(100+1+|01)+");
	int N; std::cin >> N;
	while (N--)
	{
		std::string tmp;
		std::cin >> tmp;

		if (std::regex_match(tmp, pattern))
			std::cout << "YES" << '\n';
		else
			std::cout << "NO" << '\n';
	}
	return 0;
}