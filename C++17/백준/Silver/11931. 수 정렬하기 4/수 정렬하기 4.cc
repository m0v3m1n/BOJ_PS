#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N; std::cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
		std::cin >> arr[i];

	std::sort(arr, arr + N, std::greater<int>());

	for (int i = 0; i < N; i++)
		std::cout << arr[i] << '\n';

	delete[] arr;

	return 0;
}