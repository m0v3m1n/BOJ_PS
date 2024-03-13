#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>

int main()
{
	int N; std::cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
		std::scanf("%d", &arr[i]);

	std::sort(arr, arr + N, std::greater<int>());

	for (int i = 0; i < N; i++)
		std::printf("%d\n", arr[i]);

	delete[] arr;

	return 0;
}