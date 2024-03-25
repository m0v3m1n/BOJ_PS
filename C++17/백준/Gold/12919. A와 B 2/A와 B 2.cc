#include <iostream>
#include <string>

bool flag = false;

void rec(std::string&S, std::string& T)
{
	if (T.length() > S.length())
	{
		if (T[T.length() - 1] == 'A')
		{
			std::string tmp = "";
			for (int i = 0; i < T.length() - 1; i++)
				tmp += T[i];
			rec(S, tmp);
		}
		if (T[0] == 'B')
		{
			std::string tmp = "";
			for (int i = T.length() - 1; i >= 1; i--)
				tmp += T[i];
			rec(S, tmp);
		}
	}
	else if (T.length() == S.length())
	{
		if (T == S)
			flag = true;
		else
			return;
	}
	else
		return;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S, T;
	std::cin >> S >> T;
	
	rec(S, T);

	if (flag == true)
		std::cout << 1;
	else
		std::cout << 0;

	return 0;
}