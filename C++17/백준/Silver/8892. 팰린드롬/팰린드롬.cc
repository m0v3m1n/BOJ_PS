#include <iostream>
#include <string>
#include <vector>

bool palindrome(std::string S)
{
	int N = S.size();

	for (int i = 0; i < N / 2; i++)
		if (S[i] != S[N - i - 1])
			return false;

	return true;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;

	while (T--)
	{
		int N; std::cin >> N;
		std::vector<std::string> input(N);
		std::vector<std::string> V;

		for (int i = 0; i < N; i++) std::cin >> input[i];
		bool flag = false;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i != j && palindrome(input[i] + input[j]))
				{
					std::cout << input[i] << input[j] << '\n';
					flag = true;
					break;
				}
			}
			if (flag)
				break;
		}

		if (!flag)
			std::cout << 0 << '\n';
	}
}