#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;

	while (T--)
	{
		int N, max = 1000 * -1000 - 1; // 1,000개 * 절댓값 1000, 최댓값보다 1 더 작게끔 --> -1.
		std::cin >> N;
		int* arr = new int[N];

		std::cin >> arr[0];
		for (int i = 1; i < N; i++)
		{
			std::cin >> arr[i];
			arr[i] += arr[i - 1];
		}
		
		// 처음부터 i까지 더했을 때 가장 큰 경우
		for (int i = 0; i < N; i++)
			if (max < arr[i])
				max = arr[i];

		// 0부터 N까지 = i & 0부터 N - 1까지 = j ==> arr[i] - arr[j] ==> 누적합의 부분배열
		for (int i = 0; i < N; i++)
			for (int j = 0; j < i; j++)
				if (max < arr[i] - arr[j])
					max = arr[i] - arr[j];

		std::cout << max << '\n';
		delete[] arr;
	}

	return 0;
}