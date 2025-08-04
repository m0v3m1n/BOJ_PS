#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;

	while (T--)
	{
		int N; std::cin >> N;
		int* arr = new int[N];

		std::cin >> arr[0];
		for (int i = 1; i < N; i++)
			std::cin >> arr[i];

		int max = arr[0];
		int cur = arr[0];

		for (int i = 1; i < N; i++)
		{
			// 카데인 알고리즘
			cur = arr[i] > cur + arr[i] ? arr[i] : cur + arr[i];
			max = max > cur ? max : cur;
		}

		std::cout << max << '\n';
		delete[] arr;
	}

	return 0;
}