#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int idx = 0;
	std::string input, output;
	std::stack<char> st;

	std::getline(std::cin, input);

	while (idx < input.length())
	{
		if (input[idx] == '<')
			while (input[idx] != '>')
				std::cout << input[idx++];
		else if (input[idx] == '>')
			std::cout << input[idx++];
		else if (input[idx] == ' ')
		{
			std::cout << ' ';
			idx++;
		}
		else
		{
			while ((input[idx] != ' ' && input[idx] != '<') && idx < input.length())
				st.push(input[idx++]);
			
			while (!st.empty())
			{
				std::cout << st.top();
				st.pop();
			}
		}
	}

	return 0;
}