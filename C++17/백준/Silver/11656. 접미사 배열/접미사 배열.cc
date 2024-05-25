#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<std::string> V;
	std::string S; std::cin >> S;
	
	while (S.length())
	{
		V.push_back(S);
		S.erase(S.begin(), S.begin() + 1);
	}

	//for (auto& K : V)
	//	std::cout << K << '\n';

	std::sort(V.begin(), V.end());

	for (auto& K : V)
		std::cout << K << '\n';
	return 0;
}