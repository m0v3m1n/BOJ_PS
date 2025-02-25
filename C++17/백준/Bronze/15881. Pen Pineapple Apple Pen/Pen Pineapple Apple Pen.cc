#include <iostream>
#include <string>

int main()
{
	int N, pPAp = 0;
	std::string S;
	
	std::cin >> N >> S;
	for (int i = 0; i < S.size(); i++)
	{
		if (i + 4 > S.size())
			break;

		if (S[i] == 'p' && S[i + 1] == 'P' && S[i + 2] == 'A' && S[i + 3] == 'p')
		{
			S.erase(S.begin() + i, S.begin() + i + 4);
			pPAp++;
			i--;
		}
	}

	std::cout << pPAp;
}
