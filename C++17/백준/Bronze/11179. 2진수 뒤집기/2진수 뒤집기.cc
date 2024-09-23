#include <iostream>
#include <string>
#include <cmath>

int main()
{
	int N; std::cin >> N;
	std::string S = "";

	while (N)
	{
		if (N % 2 == 0)
			S.append("0");
		else
			S.append("1");

		N /= 2;
	}

	int sum = 0;
	int two = 0;

	for (int i = S.size() - 1; i >= 0; i--)
	{
		if (S[i] == '1')
			sum += (std::pow(2, two));
		two++;
	}

	std::cout << sum;
}