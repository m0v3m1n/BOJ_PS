#include <iostream>
#include <string>

int main()
{
	int sad = 0, happy = 0, idx = 0;
	std::string S; std::getline(std::cin, S);

	while (idx < S.length())
	{
		if (idx + 2 < S.length() && S[idx] == ':' && S[idx + 1] == '-' && S[idx + 2] == ')')
		{
			happy++;
			idx += 3;
		}
		else if (idx + 2 < S.length() && S[idx] == ':' && S[idx + 1] == '-' && S[idx + 2] == '(')
		{
			sad++;
			idx += 3;
		}
		else
			idx++;
	}
	if (sad == happy && sad == 0)
		std::cout << "none";
	else if (sad == happy)
		std::cout << "unsure";
	else if (sad > happy)
		std::cout << "sad";
	else
		std::cout << "happy";
}