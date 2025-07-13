#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	bool odd;
	int sum = 0;
	std::string S;
	std::cin >> S;

	for (int i = 0; i < S.length() - 1; i++)
		if (S[i] == '*')
			if (i % 2)
				odd = true;
			else
				odd = false;
		else
			if (i % 2)
				sum += 3 * (S[i] - '0');
			else
				sum += (S[i] - '0');

	for (int i = 0; i < 10; i++)
		if (!odd)
			if ((sum + i + (S[12] - '0')) % 10 == 0)
				std::cout << i;
			else
				continue;
		else
			if ((sum + i * 3 + (S[12] - '0')) % 10 == 0)
				std::cout << i;
			else
				continue;
	return 0;
}