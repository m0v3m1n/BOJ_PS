#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S;
	std::getline(std::cin, S);

	if (S.length() <= 2 || (S[0] != '\"' || S[S.length() - 1] != '\"')) // 첫글자가 큰따옴표가 아니거나, 마지막 글자가 큰따옴표가 아니면 무조건 컽.
		std::cout << "CE";
	else
		std::cout << S.substr(1, S.length() - 2);

	return 0;
}