#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;

	for (int i = 0; i < N; i++)
		if (i % 2) // 홀수면
			std::cout << '2' << ' ';
		else if (i == N - 1)
			continue;
		else
			std::cout << '1' << ' ';
	
	if (N % 2) // 나머지가 1 --> 홀수
		std::cout << '3';

	return 0;
}