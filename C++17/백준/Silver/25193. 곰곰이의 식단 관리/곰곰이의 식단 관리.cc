#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::string S; std::cin >> S;

	int C = 0, ELSE = 0;
	for (int i = 0; i < S.length(); i++)
		if (S[i] == 'C')
			C++;
		else
			ELSE++;

	if (ELSE == 0)
		std::cout << C;
	else if (C % (ELSE + 1) == 0) // 나누어 떨어진다면
		std::cout << C / (ELSE + 1);
	else
		std::cout << 1 + (C / (ELSE + 1));

	return 0;
} 