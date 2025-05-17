#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::string S;
	std::cin >> N >> S;

	N = 0;
	for (int i = 0; i < S.length(); i++)
		N += (S[i] - 'A') + 1;
	std::cout << N;
	return 0;
}