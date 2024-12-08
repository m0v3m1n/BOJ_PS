#include <iostream>
#include <string>

int main()
{
	int N, sum = 0;
	std::string S, tmp;

	std::cin >> S >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> tmp;

		if (S == tmp)
			sum++;
	}
	std::cout << sum;
}