#include <iostream>

int main()
{
	int N, sum = 0;
	std::cin >> N;

	for (int i = 1; i <= N; i++)
		for (int j = i; i * j <= N; j++)
			sum++;

	std::cout << sum;	
}