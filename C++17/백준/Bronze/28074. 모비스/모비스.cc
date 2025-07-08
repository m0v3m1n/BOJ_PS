#include <iostream>
#include <string>
#include <set>

int main()
{
	std::set<char> M;
	std::string S; std::cin >> S;

	for (int i = 0; i < S.length(); i++)
		M.insert(S[i]);

	if (M.find('M') != M.end() && M.find('O') != M.end()
		&& M.find('B') != M.end() && M.find('I') != M.end()
		&& M.find('S') != M.end())
		std::cout << "YES";
	else
		std::cout << "NO";

	return 0;
}