#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int JOI = 0, IOI = 0;
	std::string S;
	std::cin >> S;

	for (int i = 0; i < S.size() - 2; i++)
	{
		if (S[i] == 'J' && S[i + 1] == 'O' && S[i + 2] == 'I')
			JOI++;

		if (S[i] == 'I' && S[i + 1] == 'O' && S[i + 2] == 'I')
			IOI++;
	}

	std::cout << JOI << '\n' << IOI;
}