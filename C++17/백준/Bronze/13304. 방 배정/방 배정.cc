#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, K, s, y, total = 0;
	int arr[2][6] = { 0, };

	std::cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		std::cin >> s >> y;
		arr[s][y - 1]++;
	}

	total += 1 + (arr[0][0] + arr[0][1] + arr[1][0] + arr[1][1]) / K;
	if (!((arr[0][0] + arr[0][1] + arr[1][0] + arr[1][1]) % K))
		total -= 1;

	for (int i = 3; i < 6; i += 2)
	{
		total += 1 + (arr[0][i - 1] + arr[0][i]) / K;
		if (!((arr[0][i - 1] + arr[0][i]) % K))
			total -= 1;

		total += 1 + (arr[1][i - 1] + arr[1][i]) / K;
		if (!((arr[1][i - 1] + arr[1][i]) % K))
			total -= 1;
	}

	std::cout << total;
	return 0;
}