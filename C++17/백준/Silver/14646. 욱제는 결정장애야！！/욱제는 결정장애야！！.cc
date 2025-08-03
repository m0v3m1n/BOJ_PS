#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, tmp, cur = 0, max = 0; std::cin >> N;

	bool* arr = new bool[N + 1];
	for (int i = 0; i <= N; i++)
		arr[i] = false;

	for (int i = 0; i < 2 * N; i++)
	{
		std::cin >> tmp;

		if (!arr[tmp])
		{
			arr[tmp] = true;
			cur++;
		}
		else
		{
			arr[tmp] = false;
			max = (max > cur ? max : cur);
			cur--;
		}
	}

	std::cout << max;
	delete[] arr;
	return 0;
} 