#include <iostream>

int main()
{
	int N, M, j, f, left, right, dir = 0;
	std::cin >> N >> M >> j;

	left = 1; right = M; // 초기값 설정.

	for (int i = 0; i < j; i++)
	{
		std::cin >> f;
		if (left <= f && f <= right) // 바구니 안이라면 다음 과일.
			continue;
		else if (f < left)
		{
			dir += (left - f);
			right -= (left - f);
			left -= (left - f);
		}
		else if (right < f)
		{
			dir += (f - right);
			left += (f - right);
			right += (f - right);
		}
	}

	std::cout << dir;
	return 0;
}