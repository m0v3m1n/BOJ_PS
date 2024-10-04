#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int sum = 0;
	std::string S; std::cin >> S;

	for (int i = 0; i < S.size(); i++)
		if (S[i] == ',')
			sum++;

	std::cout << sum + 1;
	return 0;
}