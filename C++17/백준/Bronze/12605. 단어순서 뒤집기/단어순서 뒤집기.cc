#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::string S;

	std::getline(std::cin, S);
	N = std::stoi(S);

	for (int i = 0; i < N; i++)
	{
		std::getline(std::cin, S);

		std::stack<std::string> ST;
		std::string tmp = "";

		for (int j = 0; j <= S.size(); j++)
		{
			if (S[j] == ' ' || j == S.size())
			{
				ST.push(tmp);
				tmp = "";
			}
			else
				tmp += S[j];
		}

		std::cout << "Case #" << i + 1 << ": ";
		while (!ST.empty())
		{
			std::cout << ST.top() << ' ';
			ST.pop();
		}
		std::cout << '\n';
	}
}