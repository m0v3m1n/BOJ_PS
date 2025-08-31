#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, Nth; std::cin >> N;
	std::cin.ignore();

	while (N--)
	{
		Nth = 0;
		std::string S, removed;
		std::getline(std::cin, S);
		
		for(int i = 0; i < S.length(); i++)
			if (S[i] == ' ')
			{
				Nth = i;
				break;
			}

		removed = S.substr(Nth, S.length() - Nth);

		std::cout << "god";
		for (int i = 0; i < removed.length(); i++)
			if (removed[i] == ' ')
				continue;
			else
				std::cout << removed[i];
		std::cout << '\n';
	}
	return 0;
} 