#include <iostream>

int main()
{
	int N, start, end, sum = 0; std::cin >> N;
	bool total[10001] = { false, };

	for (int i = 0; i < N; i++)
	{
		std::cin >> start >> end;

		for (int j = start; j <= end - 1; j++)
			total[j] = true;
	}

	for (int i = 1; i <= 10000; i++)
		if (total[i] == true)
			sum++;

	std::cout << sum;
}