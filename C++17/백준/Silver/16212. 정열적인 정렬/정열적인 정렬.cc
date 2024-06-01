#include <iostream>
#include <algorithm>

int arr[500001];

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
		std::cin >> arr[i];

	std::sort(arr, arr + N);

	for (int i = 0; i < N; i++)
		std::cout << arr[i] << ' ';

	return 0;
}