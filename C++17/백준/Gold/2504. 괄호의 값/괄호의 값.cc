#include <iostream>
#include <stack>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int sum = 0, tmp = 1;

	char c;
	std::string str;
	std::stack<char> S;

	std::cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		c = str[i];

		if (c == '(')
		{
			S.push(c);
			tmp *= 2;
		}
		else if (c == '[')
		{
			S.push(c);
			tmp *= 3;
		}
		else if (c == ')')
		{
			if (S.empty() || S.top() != '(')
			{
				std::cout << 0;
				return 0;
			}
			// else
			if (str[i - 1] == '(')
				sum += tmp;

			S.pop();
			tmp /= 2;
		}
		else
		{
			if (S.empty() || S.top() != '[')
			{
				std::cout << 0;
				return 0;
			}
			// else
			if (str[i - 1] == '[')
				sum += tmp;

			S.pop();
			tmp /= 3;
		}
	}

	if (S.empty())
		std::cout << sum;
	else
		std::cout << 0;

	return 0;
}