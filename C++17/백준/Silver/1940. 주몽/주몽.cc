#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, left = 0, right = 0, count = 0; std::cin >> N >> M;

	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	std::sort(V.begin(), V.end());

	if (V.size() == 1)
		std::cout << 0;
	else
	{
		right = N - 1;

		while (left < right && right < N)
		{
			// std::cout << "Left : " << V[left] << ", Right : " << V[right] << '\n';
			if (V[left] + V[right] == M)
			{
				count++;
				left++; // 왼쪽 이동으로 설정.
			}
			else if (V[left] + V[right] < M) // M보다 작으면?
				left++;
			else
				right--;

		}
		std::cout << count;
	}

	return 0;
}