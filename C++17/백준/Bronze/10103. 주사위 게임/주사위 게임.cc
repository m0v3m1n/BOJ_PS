#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int c = 100, s = 100;
	int N, C, S; std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> C >> S;

		if (C > S)
			s -= C;
		else if (C < S)
			c -= S;
	}

	std::cout << c << '\n' << s;
}