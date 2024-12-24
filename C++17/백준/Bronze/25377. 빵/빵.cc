#include <iostream>

int main()
{
	int N; std::cin >> N;
	int min = 9999 , arrive, bread;

	while (N--)
	{
		std::cin >> arrive >> bread;
		if (arrive <= bread && bread <= min)
			min = bread;
	}

	if (min == 9999)
		std::cout << -1;
	else
		std::cout << min;
}