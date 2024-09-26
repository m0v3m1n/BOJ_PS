#include <iostream>
#include <string>
#include <algorithm>

std::string S;

bool pi()
{
	if (S[0] == 'p' && S[1] == 'i')
		return true;
	else
		return false;
}

bool ka()
{
	if (S[0] == 'k' && S[1] == 'a')
		return true;
	else
		return false;
}

bool chu()
{
	if (S[0] == 'c' && S[1] == 'h' && S[2] == 'u')
		return true;
	else
		return false;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	bool flag = true;
	std::cin >> S;

	while (flag)
		if (S.size() == 0)
			break;
		else if (S.size() == 1)
			flag = false;
		else if (S.size() == 2)
			if (pi() || ka())
				S.erase(S.begin(), S.begin() + 2);
			else
				flag = false;
		else
			if (pi() || ka())
				S.erase(S.begin(), S.begin() + 2);
			else if (chu())
				S.erase(S.begin(), S.begin() + 3);
			else
				flag = false;

	if (flag)
		std::cout << "YES";
	else
		std::cout << "NO";

	return 0;
}