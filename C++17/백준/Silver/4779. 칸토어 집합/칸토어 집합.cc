#include <iostream>

void Cantorset(int N)
{
	if (N == 1)
		std::cout << '-';
	else
	{
		int length = N / 3;

		Cantorset(length);
		for (int i = 0; i < length; i++)
			std::cout << ' ';
		Cantorset(length);
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	while (1)
	{
		int N; std::cin >> N;

		if (std::cin.eof())
			break;

		int first = 1;
		for (int i = 0; i < N; i++)
			first *= 3;

		Cantorset(first);
		std::cout << '\n';
	}

	return 0;
}