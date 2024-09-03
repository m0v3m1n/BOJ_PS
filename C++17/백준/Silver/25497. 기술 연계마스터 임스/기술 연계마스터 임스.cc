#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, success = 0;
	std::string S;
	
	std::cin >> N >> S;
	std::stack<char> LR;
	std::stack<char> SK;

	for (int i = 0; i < N; i++)
		if (S[i] >= '0' && S[i] <= '9')
			success++;
		else
			if (S[i] == 'L')
				LR.push('L');
			else if (S[i] == 'R')
				if (LR.empty())
					break;
				else
				{
					LR.pop();
					success++;
				}
			else if (S[i] == 'S')
				SK.push('S');
			else
				if (SK.empty())
					break;
				else
				{
					SK.pop();
					success++;
				}

	std::cout << success;
}