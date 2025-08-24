#include <iostream>

bool map[2001][2001] = { false, };

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int left, low, right, upper;
	int count = 0;

	std::cin >> left >> low >> right >> upper; // 첫번째 보드
	for (int i = low; i < upper; i++)
		for (int j = left; j < right; j++)
			map[i + 1000][j + 1000] = 1;

	std::cin >> left >> low >> right >> upper; // 두번째 보드
	for (int i = low; i < upper; i++)
		for (int j = left; j < right; j++)
			map[i + 1000][j + 1000] = 1;

	std::cin >> left >> low >> right >> upper; // 트럭
	for (int i = low; i < upper; i++)
		for (int j = left; j < right; j++)
			map[i + 1000][j + 1000] = 0;

	for (int i = 0; i < 2000; i++)
		for (int j = 0; j < 2000; j++)
			if (map[i][j])
				count++;

	std::cout << count;
	return 0;
} 