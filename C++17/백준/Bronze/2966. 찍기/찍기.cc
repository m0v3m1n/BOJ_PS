#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	char a[3] = { 'A', 'B', 'C' };
	char b[4] = { 'B', 'A', 'B', 'C' };
	char c[6] = { 'C', 'C', 'A', 'A', 'B', 'B' };

	int score[3] = { 0,0,0 };
	int N, max = 0;

	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		char tmp;
		std::cin >> tmp;

		if (a[i % 3] == tmp) score[0]++;
		if (b[i % 4] == tmp) score[1]++;
		if (c[i % 6] == tmp) score[2]++;
	}

	for (int i = 0; i < 3; i++)
		max = score[i] > max ? score[i] : max;

	std::cout << max << '\n';

	if (max == score[0]) std::cout << "Adrian" << '\n';
	if (max == score[1]) std::cout << "Bruno" << '\n';
	if (max == score[2]) std::cout << "Goran" << '\n';

	return 0;
}