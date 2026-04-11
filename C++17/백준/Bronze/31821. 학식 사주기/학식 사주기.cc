#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, tmp, sum = 0;

	std::cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		std::cin >> arr[i];

	std::cin >> M;
	for (int i = 0; i < M; i++)
	{
		std::cin >> tmp;
		sum += arr[tmp - 1];
	}

	std::cout << sum;

	delete[] arr;
	return 0;
}