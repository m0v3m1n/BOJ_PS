#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, l, r, t, q; std::cin >> N;

	std::vector<bool> tmp(N, false);
	std::vector<int> nums;
	std::vector<std::vector<bool>> DP;

	for (int i = 0; i < N; i++)
	{
		DP.push_back(tmp);
		std::cin >> t;
		nums.push_back(t);
	} // 입력 받기

	for (int i = 0; i < N - 1; i++)
	{
		DP[i][i] = true;
		if (nums[i] == nums[i + 1])
			DP[i][i + 1] = true;
	} DP[N - 1][N - 1] = true;
	// 대각행렬 및 바로 옆일때 같은 경우 true
	
	for (int i = N - 2; i >= 0; i--)
		for (int j = N - 1; j > i; j--)
			if (nums[i] == nums[j] && DP[i + 1][j - 1] == true)
				DP[i][j] = true;

	std::cin >> q;
	for (int i = 0; i < q; i++)
	{
		std::cin >> l >> r;

		if (DP[l - 1][r - 1] == true)
			std::cout << 1 << '\n';
		else
			std::cout << 0 << '\n';
	}

	return 0;
}