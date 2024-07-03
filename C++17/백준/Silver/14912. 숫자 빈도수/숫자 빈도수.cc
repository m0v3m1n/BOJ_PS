#include <iostream>
#include <string>

int main()
{
	long long sum = 0;
	int N, n; std::cin >> N >> n;

	for (int i = 1; i <= N; i++)
	{
		std::string S = std::to_string(i);
		for (int j = 0; j < S.size(); j++)
			if (S[j] == n + '0')
				sum++;
	}

	std::cout << sum;
	return 0;
}