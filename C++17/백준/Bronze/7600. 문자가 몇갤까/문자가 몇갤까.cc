#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S;
	while(1)
	{
		int alp['z' - 'a' + 1] = { 0, };
		int count = 0;
		std::getline(std::cin, S);

		if (S == "#")
			break;

		for (int i = 0; i < S.length(); i++)
		{
			if ('a' <= S[i] && S[i] <= 'z')
				alp[S[i] - 'a']++;
			else if ('A' <= S[i] && S[i] <= 'Z')
				alp[S[i] - 'A']++;
			else
				continue;
		}

		for (int i = 0; i < 'z' - 'a' + 1; i++)
			if (alp[i])
				count++;

		std::cout << count << '\n';
	}

	return 0;
} 