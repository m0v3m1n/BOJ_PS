#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;
	while (T--)
	{
		int N, tmp, max_idx = 0; std::cin >> N;
		int arr[1001] = { 0, };

		for (int i = 0; i < N; i++)
		{
			std::cin >> tmp;
			arr[tmp]++;
		}

		for (int i = 1; i <= 1000; i++)
			if (arr[max_idx] < arr[i])
				max_idx = i;

		std::cout << max_idx << '\n';
	}
}