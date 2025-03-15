#include <iostream>
#include <string>

int main()
{
	std::string S;
	std::getline(std::cin, S);

	for(int i = 0; i < S.length(); i++)
		if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
			S.erase(S.begin() + i, S.begin() + i + 2);

	std::cout << S;
}