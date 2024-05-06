#include <iostream>
#include <string>

int main()
{
	int height = 10;
	std::string S; std::cin >> S;
	for (int i = 1; i < S.size(); i++)
		if (S[i] == S[i - 1])
			height += 5;
		else
			height += 10;
	std::cout << height;
	return 0;
}