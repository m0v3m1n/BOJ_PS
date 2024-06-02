#include <iostream>
#include <vector>
#include <string>

int main()
{
	int T; std::cin >> T;
	std::string S;

	while (T--)
	{
		double N; std::cin >> N;
		std::vector<char> op;

		std::getline(std::cin, S);
		for (int i = 0; i < S.length(); i++)
			if (S[i] == '@' || S[i] == '%' || S[i] == '#')
				op.push_back(S[i]);

		for (int i = 0; i < op.size(); i++)
			if (op[i] == '@')
				N *= 3;
			else if (op[i] == '%')
				N += 5;
			else
				N -= 7;

		printf("%.2lf\n", N);
	}

	return 0;
}