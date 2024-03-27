#include <iostream>
#include <string>
#include <vector>

bool flag = false;

void REC(std::string& S, std::string& T)
{
	if (S.length() == T.length())
	{
		if (S == T)
			flag = true;
		else
			return;
	}
	else if (S.length() > T.length())
		return;
	else
	{
		std::string tmp = "";

		if (T[T.length() - 1] == 'A')
		{
			tmp = T.substr(0, T.length() - 1);
			REC(S, tmp);
		}
		else
		{
			tmp = "";
			for (int i = T.length() - 2; i >= 0; i--)
				tmp += T[i];
			REC(S, tmp);
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S, T;
	std::cin >> S >> T;

	REC(S, T);

	if (flag)
		std::cout << 1;
	else
		std::cout << 0;

	return 0;
}