#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int T; std::cin >> T;

	while (T--)
	{
		long long A, B, sum;
		bool flag = false;

		std::string S; std::cin >> S;

		A = std::stoll(S);
		std::reverse(S.begin(), S.end());
		B = std::stoll(S);

		sum = A + B;
		S = std::to_string(sum);

		for(int i = 0; i < S.size() / 2; i++)
			if (S[i] != S[S.size() - i - 1])
			{
				std::cout << "NO\n";
				flag = true;
				break;
			}

		if (flag)
			continue;
		else
			std::cout << "YES\n";
	}
}