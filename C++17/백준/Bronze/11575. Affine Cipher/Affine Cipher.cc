#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;

	while (T--)
	{
		int A, B;
		std::cin >> A >> B;
		
		std::string S;
		std::cin >> S;

		for (int i = 0; i < S.length(); i++)
			S[i] = ((A * (S[i] - 'A') + B) % 26) + 'A';

		std::cout << S << '\n';
	}
	return 0;
} 