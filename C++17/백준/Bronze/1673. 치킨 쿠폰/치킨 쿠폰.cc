#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, K, stamp, coupon, chicken;
	
	while (std::cin >> N >> K)
	{
		coupon = N; // 쿠폰 N 개.
		stamp = 0; // 도장 N 개.
		chicken = 0;

		while (coupon)
		{
			chicken += coupon;
			stamp += coupon;

			coupon = 0;
			coupon += (stamp / K);
			stamp %= K;
		}

		std::cout << chicken << '\n';
	}

	return 0;
}