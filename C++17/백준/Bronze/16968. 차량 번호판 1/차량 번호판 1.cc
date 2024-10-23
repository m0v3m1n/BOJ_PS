#include <iostream>
#include <stack>

int main()
{
	int sum = 1;
	std::stack<int> ST;
	std::string S; std::cin >> S;

	for (int i = 0; i < S.size(); i++)
	{
		if (S[i] == 'c')
		{
			if (ST.empty())
				ST.push(26);
			else
				if (S[i] == S[i - 1])
					ST.push(25);
				else
					ST.push(26);
		}
		else
		{
			if (ST.empty())
				ST.push(10);
			else
				if (S[i] == S[i - 1])
					ST.push(9);
				else
					ST.push(10);
		}
	}

	while (!ST.empty())
	{
		sum *= ST.top();
		ST.pop();
	}

	std::cout << sum;
	return 0;
}