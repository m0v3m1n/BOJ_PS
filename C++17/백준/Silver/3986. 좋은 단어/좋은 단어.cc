#include <iostream>
#include <stack>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;
	int count = 0;
	char C;

	while (T--)
	{
		std::string S; std::cin >> S;
		std::stack<char> ST;

		for (int i = 0; i < S.size(); i++)
		{
			if (ST.empty())
				ST.push(S[i]);
			else
			{
				C = S[i];

				if (ST.top() == C)
					ST.pop();
				else
					ST.push(C);
			}
		}

		if (ST.empty())
			count++;
	}
	
	std::cout << count;
	return 0;
}