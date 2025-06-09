#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::string S;

	for (int i = 1; i <= N; i++)
	{
		std::cin >> S;
		std::cout << "String #" << i << '\n';

		for (int j = 0; j < S.length(); j++)
			std::cout << (char)(((1 + S[j] - 'A') % ('Z' - 'A' + 1) + 'A'));

		std::cout << "\n\n";
	}
}
