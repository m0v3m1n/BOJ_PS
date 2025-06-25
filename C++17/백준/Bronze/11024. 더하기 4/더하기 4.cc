#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::cin >> N;
	std::cin.ignore();

	while (N--)
	{
		std::string S;
		std::getline(std::cin, S);
		S += " ";

		int cur_pos = 0;
		int pos;
		int sum = 0;

		while ((pos = S.find(" ", cur_pos)) != std::string::npos)
		{
			int len = pos - cur_pos;
			sum += std::stoi(std::string(S.substr(cur_pos, len)));
			cur_pos = pos + 1;
		}

		std::cout << sum << '\n';
	}
}