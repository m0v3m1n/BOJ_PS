#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N, sum = 0, tmp = 0; std::cin >> N;
	std::string S; std::cin >> S;

	for (long long i = 0; i < N; i++)
	{
		if ('0' <= S[i] && S[i] <= '9')
		{
			tmp *= 10;
			tmp += (S[i] - '0');
		}
		else
		{
			sum += tmp;
			tmp = 0;
		}
	}

	if (tmp != 0)
		sum += tmp;

	std::cout << sum;
}